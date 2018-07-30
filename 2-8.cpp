/*
한 라인에 ';'으로 5개의 이름을 구분하여 입력받아, 각 이름을 끊어내어 화면에 출력하고 가장 긴 이름을 판별하라.
힌트 : ';'까지 문자열을 읽고자하면 다음 코드를 사용하고
	  char name[100];
	  cin.getline(name, 100, ';');
	  5개 읽어야 하니 5번 루프를 돈다.
*/

#include <iostream>
using namespace std;

int main() {
	char name[100];
	
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n>>";
	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << endl;
	}

	return 0;
}