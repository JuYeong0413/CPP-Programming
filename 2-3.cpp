// 카보드로부터 두 개의 정수를 읽어 큰 수를 화면에 출력하라.

#include <iostream>
using namespace std;

int main() {
	int a, b;

	cout << "두 수를 입력하라>>";
	cin >> a >> b;

	cout << "큰 수 = ";

	if (a >= b) {
		cout << a << endl;
	}
	else cout << b << endl;

	return 0;
}