// string Ŭ������ �̿��Ͽ� ��ĭ�� �����ϴ� ���ڿ��� �Է¹ް� ���ڿ����� 'a'�� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��غ���.
// (2) ���ڿ����� 'a'�� ã�� ���� string Ŭ������ find() ��� �Լ��� �̿��Ͽ� �ۼ��϶�.
// text.find('a', index);�� text ���ڿ��� index ��ġ���� 'a'�� ã�� ���ڿ� �� �ε����� �����Ѵ�.

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count = 0;

	cout << "���ڿ� �Է�>> ";
	getline(cin, s, '\n');

	for (int i = 0; i < s.length(); i++) {
		if (s.find('a') != -1) count++;
	}

	cout << "���� a�� " << count << "�� �ֽ��ϴ�." << endl;
}