// ���ڿ��� �ϳ� �Է¹ް� ���ڿ��� �κ� ���ڿ��� ������ ���� ����ϴ� ���α׷��� �ۼ��϶�.

#include <iostream>
using namespace std;

int main() {
	char input[100];

	cout << "���ڿ� �Է�>>";

	cin.getline(input, 100);
	for (int i = 0; i < 100; i++) {
		if (input[i] == '\0') break;
		else {
			for (int j = 0; j <= i; j++) {
				cout << input[j];
			}
			cout << endl;
		}
	}

	return 0;
}