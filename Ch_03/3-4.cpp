/*
CoffeeMachine Ŭ������ ������. main() �Լ��� ���� ����� ������ ������ CoffeeMachine Ŭ������ �ۼ��϶�.
���������� �� �ܿ��� Ŀ�ǿ� ���� ���� 1�� �Һ�ǰ�, �Ƹ޸�ī���� ��� Ŀ�Ǵ� 1, ���� 2�� �Һ�ǰ�,
���� Ŀ�Ǵ� Ŀ�� 1, �� 2, ���� 1�� �Һ�ȴ�.
CoffeeMachine Ŭ�������� � ��� ������ � ��� �Լ��� �ʿ����� �� �Ǵ��Ͽ� �ۼ��϶�.
*/

#include <iostream>
using namespace std;

class CoffeeMachine {
private:
	int coffee;
	int water;
	int sugar;

public:
	CoffeeMachine(int c, int w, int s);
	void drinkEspresso();
	void show();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
};

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
	coffee = c;
	water = w;
	sugar = s;
}

void CoffeeMachine::drinkEspresso() {
	coffee--;
	water--;
}

void CoffeeMachine::drinkAmericano() {
	coffee--;
	water--;
	water--;
}

void CoffeeMachine::drinkSugarCoffee() {
	coffee--;
	water--;
	water--;
	sugar--;
}

void CoffeeMachine::show() {
	cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << "\t��:" << water << "\t����:" << sugar << endl;
}

void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}

int main() {
	CoffeeMachine java(5, 10, 3); // Ŀ�Ƿ�:5, ����:10, ����:6���� �ʱ�ȭ
	java.drinkEspresso(); // Ŀ�� 1, �� 1 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.drinkAmericano(); // Ŀ�� 1, �� 2 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.drinkSugarCoffee(); // Ŀ�� 1, �� 2, ���� 1 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.fill(); // Ŀ�� 10, �� 10, ���� 10���� ä���
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
}