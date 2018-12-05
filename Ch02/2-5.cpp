// <Enter> 키가 입력될 때까지 문자들을 읽고, 입력된 문자 'x'의 개수를 화면에 출력하라.
// 힌트 : cin.getline()을 이용하라.

#include <iostream>
using namespace std;

int main() {
	char input[100];
	int count = 0;

	cout << "문자들을 입력하라(100개 미만)." << endl;
	cin.getline(input, 100, '\n');

	for (int i = 0; i < 100; i++) {
		if (input[i] == 'x') count++;
	}

	cout << "x의 개수는 " << count << endl;

	return 0;
}