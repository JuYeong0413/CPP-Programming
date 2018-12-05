// 문제 5번을 참고하여 짝수 정수만 랜덤하게 발생시키는 EvenRandom 클래스를 작성하고
// EvenRandom 클래스를 이용하여 10개의 짝수를 랜덤하게 출력하는 프로그램을 완성하라.
// 0도 짝수로 처리한다.

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
	srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
}

int EvenRandom::next() {
	int n;
	while (true) {
		n = rand(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수 발생
		if (n % 2 == 0) break;
	}
	return n;
}

int EvenRandom::nextInRange(int a, int b) {
	int n;
	while (true) {
		n = (rand() % (b - 1)) + a; // a에서 b 사이의 랜덤한 정수 발생
		if (n % 2 == 0) break;
	}
	return n;
}

int main() {
	EvenRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수 (짝수)
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10); // 2에서 10 사이의 랜덤한 정수 (짝수)
		cout << n << ' ';
	}
	cout << endl;
}