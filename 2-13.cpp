// �߽Ĵ��� �ֹ� ������ C++ ���α׷����� �ۼ��غ���. ���� ���� ����� ���� �޴��� ��� ���� �Է¹ް� �̸� ����ϸ� �ȴ�.
// �߸��� �Է��� �������� �κе� �ڵ忡 �߰��϶�.

#include <iostream>
using namespace std;


int main() {
	int menu, num;

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ� *****" << endl;

	while (true) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>>";
		cin >> menu;

		if (menu >= 1 && menu <= 3) {
			cout << "���κ�?";
			cin >> num;

			if (num > 0) {
				switch (menu) {
				case 1:
					cout << "«�� " << num << "�κ� ���Խ��ϴ�" << endl;
					break;
				case 2:
					cout << "¥�� " << num << "�κ� ���Խ��ϴ�" << endl;
					break;
				case 3:
					cout << "������ " << num << "�κ� ���Խ��ϴ�" << endl;
					break;
				default:
					break;
				}
			}
			else cout << "�߸��� �Է��Դϴ�." << endl;
		}

		else if (menu == 4) {
			cout << "���� ������ �������ϴ�." << endl;
			break;
		}

		else cout << "�ٽ� �ֹ��ϼ���!!" << endl;
	}

	return 0;

}