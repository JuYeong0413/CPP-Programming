/*
�Ǽ��� ���� ǥ���� Ŭ���� Exp�� �ۼ��϶�. Exp�� �̿��ϴ� main() �Լ��� ���� ����� ������ ����.
Ŭ���� Exp�� ��� ���ϰ� Exp.cpp ���Ϸ� �и��Ͽ� �ۼ��϶�.
��Ʈ : Exp Ŭ������ 3���� �����ڿ� ���� 4���� ��� �Լ��� �ʿ��ϴ�.
	   int getValue() // ������ ������ ����Ͽ� ����
	   int getBase() // ���̽� �� ����
	   int getExp() // ���� �� ����
	   bool equals(Exp b) // �� ��ü�� ��ü b�� ���� ������ �Ǻ��Ͽ� ����
*/

#include <iostream>
using namespace std;

#include "Exp.h"

int main() {
	Exp a(3, 2); // 3^2 = 9. ���̽� 3, ���� 2
	Exp b(9); // 9^1 = 9. ���̽� 9, ���� 1
	Exp c; // 1^1 = 1. ���̽� 1, ���� 1

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a�� ���̽� " << a.getBase() << ',' << "���� " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}