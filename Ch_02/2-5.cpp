<<<<<<< HEAD
// ���ڿ��� �� �� �Է¹ް� �� ���� ���ڿ��� ������ �˻��ϴ� ���α׷��� �ۼ��϶�.
// ���� ������ "�����ϴ�", �ƴϸ� "���� �ʽ��ϴ�"�� ����϶�.

#include <iostream>
#include <string>
using namespace std;

int main() {
	string password;
	string input;

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	getline(cin, password);

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	getline(cin, input);

	if (password == input) {
		cout << "�����ϴ�" << endl;
	}
	else cout << "���� �ʽ��ϴ�" << endl;

	return 0;
=======
// ���ڿ��� �� �� �Է¹ް� �� ���� ���ڿ��� ������ �˻��ϴ� ���α׷��� �ۼ��϶�.
// ���� ������ "�����ϴ�", �ƴϸ� "���� �ʽ��ϴ�"�� ����϶�.

#include <iostream>
#include <string>
using namespace std;

int main() {
	string password;
	string input;

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	getline(cin, password);

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	getline(cin, input);

	if (password == input) {
		cout << "�����ϴ�" << endl;
	}
	else cout << "���� �ʽ��ϴ�" << endl;

	return 0;
>>>>>>> 87080f397353b33f54598cf71212766956f8dbfd
}