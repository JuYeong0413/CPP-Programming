/*
실수의 지수 표현을 클래스 Exp로 작성하라. Exp를 이용하는 main() 함수와 실행 결과는 다음과 같다.
클래스 Exp를 헤더 파일과 Exp.cpp 파일로 분리하여 작성하라.
힌트 : Exp 클래스는 3개의 생성자와 다음 4개의 멤버 함수가 필요하다.
	   int getValue() // 지수를 정수로 계산하여 리턴
	   int getBase() // 베이스 값 리턴
	   int getExp() // 지수 값 리턴
	   bool equals(Exp b) // 이 객체와 객체 b의 값이 같은지 판별하여 리턴
*/

#include <iostream>
using namespace std;

#include "Exp.h"

int main() {
	Exp a(3, 2); // 3^2 = 9. 베이스 3, 지수 2
	Exp b(9); // 9^1 = 9. 베이스 9, 지수 1
	Exp c; // 1^1 = 1. 베이스 1, 지수 1

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a의 베이스 " << a.getBase() << ',' << "지수 " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}