// ���� ���� 5���� �迭�� ���� �Ҵ�ް�, ������ 5�� �Է¹޾� ����� ���ϰ� ����� �� �迭�� �Ҹ��Ű���� main() �Լ��� �ۼ��϶�.

#include <iostream>
using namespace std;

int main() {
	int *array = new int[5];
	int sum = 0;
	double average;

	cout << "���� 5�� �Է�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> array[i];
		sum += array[i];
	}
	
	average = (double)sum / 5.0;
	cout << "��� " << average << endl;

	delete[] array;
}