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
(2) Ŭ������ ����ο� �����θ� ��� ���ϰ� cpp ���Ϸ� ������ ���α׷��� �ۼ��϶�.
*/

#include <iostream>
using namespace std;

#include "Header.h"

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