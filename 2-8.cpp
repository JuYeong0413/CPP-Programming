/*
�� ���ο� ';'���� 5���� �̸��� �����Ͽ� �Է¹޾�, �� �̸��� ����� ȭ�鿡 ����ϰ� ���� �� �̸��� �Ǻ��϶�.
��Ʈ : ';'���� ���ڿ��� �а����ϸ� ���� �ڵ带 ����ϰ�
	  char name[100];
	  cin.getline(name, 100, ';');
	  5�� �о�� �ϴ� 5�� ������ ����.
*/

#include <iostream>
using namespace std;

int main() {
	char name[100];
	
	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>";
	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << endl;
	}

	return 0;
}