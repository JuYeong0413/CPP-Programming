/*
영문 텍스트를 입력받아 알파벳 히스토그램을 그리는 프로그램을 작성하라.
대문자는 모두 소문자로 집계하며, 텍스트 입력의 끝은 ';' 문자로 한다.
힌트 : cin.getline(buf, 10000, ';');를 이용하여 텍스트를 키보드로부터 읽으면 된다.
	   문자를 소문자로 바꿀 때 tolower(char c) 함수를 이용하고, 알파벳인지 검사하기 위해 isalpha(char c) 함수를 이용하라.
	   텍스트 입력을 쉽게 하려면, 입력할 텍스트를 메모장에 입력한 후 ctrl-c로 복사하고, DOS 실행 창에 마우스 오른쪽 버튼을 누르고 붙여 넣기 메뉴를 선택하면 된다.
*/

#include <iostream>
using namespace std;

int main() {
	char buf[10000];
	int alpha[26] = { 0. }; // 각 알파벳의 개수를 저장할 배열
	int count = 0; // 알파벳 개수
	int i = 0;

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	cin.getline(buf, 10000, ';');

	while (buf[i] != '\0') {
		if (isalpha(buf[i])) {
			buf[i] = tolower(buf[i]);
			count++;
			alpha[buf[i] - 97]++;
		}
		i++;
	}

	cout << "총 알파벳 수 " << count << endl << endl;

	for (i = 0; i < 26; i++) {
		cout << (char)(i + 97) << " (" << alpha[i] << ")\t: ";
		for (int j = 0; j < alpha[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;

}