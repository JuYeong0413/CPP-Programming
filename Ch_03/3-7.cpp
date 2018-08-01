// ���� 5���� �����Ͽ� �����ڸ� �̿��Ͽ� ¦�� Ȧ���� ������ �� �ֵ��� SelectableRandom Ŭ������ �ۼ��ϰ�
// ¦�� 10��, Ȧ�� 10���� �����ϰ� �߻���Ű�� ���α׷��� �ۼ��϶�.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class SelectableRandom {
private:
	string select;
public:
	SelectableRandom();
	SelectableRandom(string s);
	int next();
	int nextInRange(int a, int b);
};

SelectableRandom::SelectableRandom() {
	srand((unsigned)time(0)); // ������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
}

SelectableRandom::SelectableRandom(string s) {
	select = s;
	srand((unsigned)time(0)); // ������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
}

int SelectableRandom::next() {
	int n;
	if (select == "¦��") {
		while (true) {
			n = rand(); // 0���� RAND_MAX(32767) ������ ������ ���� �߻�
			if (n % 2 == 0) break;
		}
	}
	else if (select == "Ȧ��") {
		while (true) {
			n = rand(); // 0���� RAND_MAX(32767) ������ ������ ���� �߻�
			if (n % 2 != 0) break;
		}
	}
	return n;
}

int SelectableRandom::nextInRange(int a, int b) {
	int n;
	if (select == "¦��") {
		while (true) {
			n = (rand() % (b - 1)) + a; // a���� b ������ ������ ���� �߻�
			if (n % 2 == 0) break;
		}
	}
	else if (select == "Ȧ��") {
		while (true) {
			n = (rand() % (b - 1)) + a; // a���� b ������ ������ ���� �߻�
			if (n % 2 != 0) break;
		}
	}
	return n;
}

int main() {
	SelectableRandom even("¦��");
	SelectableRandom odd("Ȧ��");
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = even.next(); // 0���� RAND_MAX(32767) ������ ������ ¦�� ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "9 ������ ���� Ȧ�� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = odd.nextInRange(2, 9); // 2���� 9 ������ ������ Ȧ�� ����
		cout << n << ' ';
	}
	cout << endl;
}