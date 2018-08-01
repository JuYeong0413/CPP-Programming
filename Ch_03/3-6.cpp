// ���� 5���� �����Ͽ� ¦�� ������ �����ϰ� �߻���Ű�� EvenRandom Ŭ������ �ۼ��ϰ�
// EvenRandom Ŭ������ �̿��Ͽ� 10���� ¦���� �����ϰ� ����ϴ� ���α׷��� �ϼ��϶�.
// 0�� ¦���� ó���Ѵ�.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	EvenRandom();
	int next();
	int nextInRange(int a, int b);
};

EvenRandom::EvenRandom() {
	srand((unsigned)time(0)); // ������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
}

int EvenRandom::next() {
	int n;
	while (true) {
		n = rand(); // 0���� RAND_MAX(32767) ������ ������ ���� �߻�
		if (n % 2 == 0) break;
	}
	return n;
}

int EvenRandom::nextInRange(int a, int b) {
	int n;
	while (true) {
		n = (rand() % (b - 1)) + a; // a���� b ������ ������ ���� �߻�
		if (n % 2 == 0) break;
	}
	return n;
}

int main() {
	EvenRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ���� (¦��)
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "10 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10); // 2���� 10 ������ ������ ���� (¦��)
		cout << n << ' ';
	}
	cout << endl;
}