// ���� �ڵ忡�� Box Ŭ������ ����ο� �����θ� Box.h, Box.cpp ���Ϸ� �и��ϰ�
// main() �Լ� �κ��� main.cpp�� �и��Ͽ� ��ü ���α׷��� �ϼ��϶�.

#include <iostream>
using namespace std;

#include"Box.h"

int main() {
	Box b(10, 2);
	b.draw(); // �ڽ��� �׸���.
	cout << endl;
	b.setSize(7, 4); // �ڽ��� ũ�⸦ �����Ѵ�.
	b.setFill('^'); // �ڽ��� ���θ� ä�� ���ڸ� '^'�� �����Ѵ�.
	b.draw(); // �ڽ��� �׸���.
}