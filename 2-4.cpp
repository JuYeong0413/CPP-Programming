// 소수점을 가지는 5개의 실수를 입력 받아 제일 큰 수를 화면에 출력하라.

#include <iostream>
using namespace std;

int main() {
	double num[5]; // 실수를 저장할 배열
	double max; // 가장 큰 수

	cout << "5 개의 실수를 입력하라>>";
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}

	max = num[0]; // 가장 큰 수가 num[0]이라고 가정
	for (int i = 0; i < 5; i++) {
		if (num[i] > max) {
			max = num[i];
		}
	}

	cout << "제일 큰 수 : " << max << endl;

	return 0;
}