/*
���� ���� �߻���Ű�� Random Ŭ������ ������. Random Ŭ������ �̿��Ͽ� ������ ������ 10�� ����ϴ� ��ʴ� ������ ����.
Random Ŭ������ ������, next(), nextInRange()�� 3���� ��� �Լ��� �������� �ۼ��ϰ� main() �Լ��� ���� �ϳ��� cpp ���Ͽ� �����϶�.
��Ʈ : ���� ������ �߻���Ű�� ���� ���� �� ������ �ڵ尡 �ʿ��ϰ�, <cstdlib>�� <ctime> ��� ������ include �ؾ� �Ѵ�.
	   srand((unsigned)time(0)); // ������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
	   int n = rand(); // 0���� RAND_MAX(32767) ������ ������ ���� �߻�
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	Random();
	int next();
	int nextInRange(int a, int b);
};

Random::Random() {
	srand((unsigned)time(0)); // ������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
}

int Random::next() {
	int n = rand(); // 0���� RAND_MAX(32767) ������ ������ ���� �߻�
	return n;
}

int Random::nextInRange(int a, int b) {
	int n = (rand() % (b - 1)) + a; // a���� b ������ ������ ���� �߻�
	return n;
}

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4); // 2���� 4 ������ ������ ����
		cout << n << ' ';
	}
	cout << endl;
}