// string Ŭ������ �̿��Ͽ� ��ĭ�� �����ϴ� ���ڿ��� �Է¹ް� ���ڿ����� 'a'�� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��غ���.
// (1) ���ڿ����� 'a'�� ã�� ���� string Ŭ������ ��� at()�� []�� �̿��Ͽ� �ۼ��϶�.
// []�� �̿��ϴ� ���

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count = 0;

	cout << "���ڿ� �Է�>> ";
	getline(cin, s, '\n');

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a') count++;
	}

	cout << "���� a�� " << count << "�� �ֽ��ϴ�." << endl;
}