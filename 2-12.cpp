// 다음 C 프로그램을 C++ 프로그램으로 수정하여 실행하라. 이 프로그램의 실행 결과는 연습문제 11과 같다.
// 힌트 : C++에서는 함수의 원형 선언에 매개 변수를 모두 선언하여야 한다.

#include <iostream>
using namespace std;

int sum(int a, int b); // 함수 원형 선언

int main() {
	int n = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	cout << "1에서 " << n << "까지의 합은 " << sum(1,n) << "입니다." << endl;
	return 0;

}

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}
	return res;
}