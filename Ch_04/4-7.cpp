/*
������ ���� ���� �߻�ȭ�� Circle Ŭ������ �ִ�. Circle Ŭ������ main() �Լ��� �ۼ��ϰ� 3���� Circle ��ü�� ���� �迭�� �����ϰ�,
������ ���� �Է¹ް� ������ 100���� ū ���� ������ ����ϴ� ���α׷��� �ϼ��϶�.
Circle Ŭ������ �ϼ��϶�.
*/

#include <iostream>
using namespace std;

class Circle {
	int radius; // ���� ������ ��
public:
	void setRadius(int radius); // �������� �����Ѵ�.
	double getArea(); // ������ �����Ѵ�.
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
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> num;
		c[i].setRadius(num);
		if (c[i].getArea() > 100.0) count++;
	}

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;

}