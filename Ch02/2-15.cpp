/*
����(+), ����(-), ����(*), ������(/), ������(%)�� ���� 5Ģ ������ �� �� �ִ� ���α׷��� �ۼ��϶�.
���� ������ ���� �������� �Էµȴ�. ������ �����ڴ� �ϳ��� ��ĭ���� �и��ȴ�.
��Ʈ : �� ���� ���ڿ��� �а�, ���� ���ڸ� ã�� �����ڿ� �� ���� �ǿ����ڸ� ������ ��, ����ϸ� �ȴ�.
	   ���ڿ��� ������ �ٲ� �� atoi() �Լ��� �̿��ϸ� �ȴ�. ���� ��� atoi("34") = 34
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
			cout << "�߸��� �Է��Դϴ�." << endl;
			break;
		}

		if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
			cout << a << ' ' << op << ' ' << b << " = " << result << endl;
	}

	return 0;

}