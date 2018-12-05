// 문제 5번을 참고하여 생성자를 이용하여 짝수 홀수를 선택할 수 있도록 SelectableRandom 클래스를 작성하고
// 짝수 10개, 홀수 10개를 랜덤하게 발생시키는 프로그램을 작성하라.

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
	srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
}

SelectableRandom::SelectableRandom(string s) {
	select = s;
	srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
}

int SelectableRandom::next() {
	int n;
	if (select == "짝수") {
		while (true) {
			n = rand(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수 발생
			if (n % 2 == 0) break;
		}
	}
	else if (select == "홀수") {
		while (true) {
			n = rand(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수 발생
			if (n % 2 != 0) break;
		}
	}
	return n;
}

int SelectableRandom::nextInRange(int a, int b) {
	int n;
	if (select == "짝수") {
		while (true) {
			n = (rand() % (b - 1)) + a; // a에서 b 사이의 랜덤한 정수 발생
			if (n % 2 == 0) break;
		}
	}
	else if (select == "홀수") {
		while (true) {
			n = (rand() % (b - 1)) + a; // a에서 b 사이의 랜덤한 정수 발생
			if (n % 2 != 0) break;
		}
	}
	return n;
}

int main() {
	SelectableRandom even("짝수");
	SelectableRandom odd("홀수");
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = even.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 짝수 정수
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = odd.nextInRange(2, 9); // 2에서 9 사이의 랜덤한 홀수 정수
		cout << n << ' ';
	}
	cout << endl;
}