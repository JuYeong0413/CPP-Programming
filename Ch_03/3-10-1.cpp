/*
�ټ��� Ŭ������ �����ϰ� Ȱ���ϴ� ������ �����̴�.
���ϱ�(+), ����(-), ���ϱ�(*). ������(/)�� �����ϴ� 4���� Ŭ���� Add, Sub, Mul, Div�� ������� �Ѵ�.
�̵��� ��� �������� ���� ����� ������.
* int Ÿ�� ���� a, b : �ǿ�����
* void setValue(int x, int y) �Լ� : �Ű� ���� x, y�� ��� a, b�� ����
* int calculate() �Լ� : ������ �����ϰ� ��� ����
main() �Լ��� Add, Sub, Mul, Div Ŭ���� Ÿ���� ��ü a, s, m, d�� �����ϰ�, �Ʒ��� ���� Ű����κ��� �� ���� ������ �����ڸ� �Է¹ް�,
a, s, m, d ��ü �߿��� ������ ó���� ��ü�� setValue() �Լ��� ȣ���� ��, calculate()�� ȣ���Ͽ� ����� ȭ�鿡 ����Ѵ�.
���α׷��� ���� ������ ����.
(1) Ŭ������ ����ο� �����θ� �и��ϰ�, ��� �ڵ带 Calculator.cpp���Ͽ� �����϶�.
*/

#include <iostream>
using namespace std;

class Add {
private:
	int a, b;

public:
	void setValue(int x, int y);
	int calculate();
};

class Sub {
private:
	int a, b;

public:
	void setValue(int x, int y);
	int calculate();
};

class Mul {
private:
	int a, b;

public:
	void setValue(int x, int y);
	int calculate();
};

class Div {
private:
	int a, b;

public:
	void setValue(int x, int y);
	int calculate();
};

void Add::setValue(int x, int y) {
	a = x;
	b = y;
}

int Add::calculate() {
	return a + b;
}

void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}

int Sub::calculate() {
	return a - b;
}

void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}

int Mul::calculate() {
	return a * b;
}

void Div::setValue(int x, int y) {
	a = x;
	b = y;
}

int Div::calculate() {
	return a / b;
}

int main() {
	int x, y;
	char op;
	while (true) {
		cout << "�� ������ �����ڸ� �Է��ϼ���>>";
		cin >> x >> y >> op;

		switch (op) {
		case '+':
			Add add;
			add.setValue(x, y);
			cout << add.calculate() << endl;
			break;
		case '-':
			Sub sub;
			sub.setValue(x, y);
			cout << sub.calculate() << endl;
			break;
		case '*':
			Mul mul;
			mul.setValue(x, y);
			cout << mul.calculate() << endl;
			break;
		case '/':
			Div div;
			div.setValue(x, y);
			cout << div.calculate() << endl;
			break;
		default:
			cout << "�߸��� �Է��Դϴ�." << endl;
		}
	}
}