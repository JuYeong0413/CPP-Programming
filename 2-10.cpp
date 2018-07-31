// 문자열을 하나 입력받고 문자열의 부분 문자열을 다음과 같이 출력하는 프로그램을 작성하라.

#include <iostream>
using namespace std;

int main() {
	char input[100];

	cout << "문자열 입력>>";

	cin.getline(input, 100);
	for (int i = 0; i < 100; i++) {
		if (input[i] == '\0') break;
		else {
			for (int j = 0; j <= i; j++) {
				cout << input[j];
			}
			cout << endl;
		}
	}

	return 0;
}