/*
다수의 클래스를 선언하고 활용하는 간단한 문제이다.
더하기(+), 빼기(-), 곱하기(*). 나누기(/)를 수행하는 4개의 클래스 Add, Sub, Mul, Div를 만들고자 한다.
이들은 모두 공통으로 다음 멤버를 가진다.
* int 타입 변수 a, b : 피연산자
* void setValue(int x, int y) 함수 : 매개 변수 x, y를 멤버 a, b에 복사
* int calculate() 함수 : 연산을 실행하고 결과 리턴
main() 함수는 Add, Sub, Mul, Div 클래스 타입의 객체 a, s, m, d를 생성하고, 아래와 같이 키보드로부터 두 개의 정수와 연산자를 입력받고,
a, s, m, d 객체 중에서 연산을 처리할 객체의 setValue() 함수를 호출한 후, calculate()를 호출하여 결과를 화면에 출력한다.
프로그램은 무한 루프를 돈다.
(1) 클래스의 선언부와 구현부를 분리하고, 모든 코드를 Calculator.cpp파일에 저장하라.
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
		cout << "두 정수와 연산자를 입력하세요>>";
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
			cout << "잘못된 입력입니다." << endl;
		}
	}
}