// 키보드로부터 두 개의 정수를 읽어 큰 수를 화면에 출력하라.

#include <iostream>
using namespace std;

int main() {
	int a, b;

	cout << "두 수를 입력하라>>";
	cin >> a >> b;

	if (a > b) cout << "큰 수 = " << a << endl;
	else if (a < b)cout << "큰 수 = " << b << endl;
	else cout << "두 수가 같습니다." << endl;

	return 0;
}