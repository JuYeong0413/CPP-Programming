// <Enter> Ű�� �Էµ� ������ ���ڵ��� �а�, �Էµ� ���� 'x'�� ������ ȭ�鿡 ����϶�.
// ��Ʈ : cin.getline()�� �̿��϶�.

#include <iostream>
using namespace std;

int main() {
	char input[100];
	int count = 0;

	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
	cin.getline(input, 100, '\n');

	for (int i = 0; i < 100; i++) {
		if (input[i] == 'x') count++;
	}

	cout << "x�� ������ " << count << endl;

	return 0;
}