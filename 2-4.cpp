// �Ҽ����� ������ 5���� �Ǽ��� �Է� �޾� ���� ū ���� ȭ�鿡 ����϶�.

#include <iostream>
using namespace std;

int main() {
	double num[5]; // �Ǽ��� ������ �迭
	double max; // ���� ū ��

	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}

	max = num[0]; // ���� ū ���� num[0]�̶�� ����
	for (int i = 0; i < 5; i++) {
		if (num[i] > max) {
			max = num[i];
		}
	}

	cout << "���� ū �� : " << max << endl;

	return 0;
}