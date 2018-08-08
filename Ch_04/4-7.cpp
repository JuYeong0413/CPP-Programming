/*
다음과 같이 원을 추상화한 Circle 클래스가 있다. Circle 클래스와 main() 함수를 작성하고 3개의 Circle 객체를 가진 배열을 선언하고,
반지름 값을 입력받고 면적이 100보다 큰 원의 개수를 출력하는 프로그램을 완성하라.
Circle 클래스도 완성하라.
*/

#include <iostream>
using namespace std;

class Circle {
	int radius; // 원의 반지름 값
public:
	void setRadius(int radius); // 반지름을 설정한다.
	double getArea(); // 면적을 리턴한다.
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle *c = new Circle[3];
	int count = 0;
	int num;

	for (int i = 0; i < 3; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> num;
		c[i].setRadius(num);
		if (c[i].getArea() > 100.0) count++;
	}

	cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;

}