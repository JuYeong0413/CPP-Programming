/*
실습 7의 문제를 수정해보자. 사용자로부터 다음과 같이 원의 개수를 입력받고, 원의 개수만큼 반지름을 입력받는 방식으로 수정하라.
원의 개수에 따라 동적으로 배열을 할당받아야 한다.
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
	int input;

	cout << "원의 개수 >> ";
	cin >> input;

	Circle *c = new Circle[input];
	int count = 0;
	int num;

	for (int i = 0; i < input; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> num;
		c[i].setRadius(num);
		if (c[i].getArea() > 100.0) count++;
	}

	cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;

}