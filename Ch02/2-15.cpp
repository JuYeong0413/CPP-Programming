/*
덧셈(+), 뺄셈(-), 곱셈(*), 나눗셈(/), 나머지(%)의 정수 5칙 연산을 할 수 있는 프로그램을 작성하라.
식은 다음과 같은 형식으로 입력된다. 정수와 연산자는 하나의 빈칸으로 분리된다.
힌트 : 한 줄을 문자열로 읽고, 공백 문자를 찾아 연산자와 두 개의 피연산자를 구분한 후, 계산하면 된다.
	   문자열을 정수로 바꿀 때 atoi() 함수를 이용하면 된다. 예를 들면 atoi("34") = 34
*/

#include <iostream>
using namespace std;


int main() {
	char input[100];
	char op;
	int a, b, result;

	while (true) {
		cout << "? ";
		for (int i = 0; i < 3; i++) {
			cin.getline(input, 100, ' ');
			
			if (i == 0) {
				a = atoi(input);
			}
			else if (i == 1) {
				op = input[0];
			}
			else {
				b = atoi(input);
			}
		}

		switch (op) {
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			result = a / b;
			break;
		case '%':
			result = a % b;
			break;
		default:
			cout << "잘못된 입력입니다." << endl;
			break;
		}

		if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
			cout << a << ' ' << op << ' ' << b << " = " << result << endl;
	}

	return 0;

}