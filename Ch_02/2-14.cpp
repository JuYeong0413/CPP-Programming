/*
Ŀ�Ǹ� �ֹ��ϴ� ������ C++ ���α׷��� �ۼ��غ���.
Ŀ�� ������ "����������", "�Ƹ޸�ī��", "īǪġ��"�� 3�����̸� ������ ���� 2000��, 2300��, 2500���̴�.
�Ϸ翡 20000�� �̻� ���� �Ǹ� ī�並 �ݴ´�. ���� ����� ���� �۵��ϴ� ���α׷��� �ۼ��϶�.
��Ʈ : char coffee[100]; int num; cin >> coffee >> num;���� Ŀ�� �̸��� �� ���� �Է¹����� �ȴ�.
	   ���� Ŀ�Ǵ� if(strcmp(coffee, "����������")==0)�� ���� ���ϸ� �ȴ�.
*/

#include <iostream>
using namespace std;


int main() {
	char coffee[100]; // Ŀ�� �̸�
	int num; // �� ��
	int cost; // ����
	int result = 0; // �� �Ǹ� ����

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;

	while (result < 20000) {
		cout << "�ֹ�>> ";
		cin >> coffee >> num;
		
		if (num > 0) {
			if (strcmp(coffee, "����������") == 0) {
				cost = 2000 * num;
				result += cost;
				cout << cost << "���Դϴ�. ���ְ� �弼��" << endl;
			}

			else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
				cost = 2300 * num;
				result += cost;
				cout << cost << "���Դϴ�. ���ְ� �弼��" << endl;
			}

			else if (strcmp(coffee, "īǪġ��") == 0) {
				cost = 2500 * num;
				result += cost;
				cout << cost << "���Դϴ�. ���ְ� �弼��" << endl;
			}

			else cout << "�߸��� �Է��Դϴ�." << endl;
		}

		else cout << "�߸��� �Է��Դϴ�." << endl;
	}

	cout << "���� " << result << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;

	return 0;

}