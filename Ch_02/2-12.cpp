<<<<<<< HEAD
// ���� C ���α׷��� C++ ���α׷����� �����Ͽ� �����϶�. �� ���α׷��� ���� ����� �������� 11�� ����.
// ��Ʈ : C++������ �Լ��� ���� ���� �Ű� ������ ��� �����Ͽ��� �Ѵ�.

#include <iostream>
using namespace std;

int sum(int a, int b); // �Լ� ���� ����

int main() {
	int n = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;
	cout << "1���� " << n << "������ ���� " << sum(1,n) << "�Դϴ�." << endl;
	return 0;

}

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}
	return res;
=======
// ���� C ���α׷��� C++ ���α׷����� �����Ͽ� �����϶�. �� ���α׷��� ���� ����� �������� 11�� ����.
// ��Ʈ : C++������ �Լ��� ���� ���� �Ű� ������ ��� �����Ͽ��� �Ѵ�.

#include <iostream>
using namespace std;

int sum(int a, int b); // �Լ� ���� ����

int main() {
	int n = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;
	cout << "1���� " << n << "������ ���� " << sum(1,n) << "�Դϴ�." << endl;
	return 0;

}

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}
	return res;
>>>>>>> 87080f397353b33f54598cf71212766956f8dbfd
}