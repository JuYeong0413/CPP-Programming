/*
CoffeeMachine 클래스를 만들어보자. main() 함수와 실행 결과가 다음과 같도록 CoffeeMachine 클래스를 작성하라.
에스프레소 한 잔에는 커피와 물이 각각 1씩 소비되고, 아메리카노의 경우 커피는 1, 물은 2가 소비되고,
설탕 커피는 커피 1, 물 2, 설탕 1이 소비된다.
CoffeeMachine 클래스에는 어떤 멤버 변수와 어떤 멤버 함수가 필요한지 잘 판단하여 작성하라.
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
	cout << "커피 머신 상태, 커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar << endl;
}

void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}

int main() {
	CoffeeMachine java(5, 10, 3); // 커피량:5, 물량:10, 설탕:6으로 초기화
	java.drinkEspresso(); // 커피 1, 물 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkAmericano(); // 커피 1, 물 2 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.fill(); // 커피 10, 물 10, 설탕 10으로 채우기
	java.show(); // 현재 커피 머신의 상태 출력
}