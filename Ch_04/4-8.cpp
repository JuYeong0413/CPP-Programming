/*
�ǽ� 7�� ������ �����غ���. ����ڷκ��� ������ ���� ���� ������ �Է¹ް�, ���� ������ŭ �������� �Է¹޴� ������� �����϶�.
���� ������ ���� �������� �迭�� �Ҵ�޾ƾ� �Ѵ�.
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
	int input;

	cout << "���� ���� >> ";
	cin >> input;

	Circle *c = new Circle[input];
	int count = 0;
	int num;

	for (int i = 0; i < input; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> num;
		c[i].setRadius(num);
		if (c[i].getArea() > 100.0) count++;
	}

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;

}