// string 클래스를 이용하여 빈칸을 포함하는 문자열을 입력받고 문자열에서 'a'가 몇 개 있는지 출력하는 프로그램을 작성해보자.
// (1) 문자열에서 'a'를 찾기 위해 string 클래스의 멤버 at()나 []를 이용하여 작성하라.
// []를 이용하는 방법

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count = 0;

	cout << "문자열 입력>> ";
	getline(cin, s, '\n');

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a') count++;
	}

	cout << "문자 a는 " << count << "개 있습니다." << endl;
}