// cout�� << �����ڸ� �̿��Ͽ�, 1���� 100���� ������ ������ ���� �� �ٿ� 10���� ����϶�.
// �� ������ ������ �и��Ͽ� ����϶�

#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 100; i++) {
		cout << i + 1 << '\t';
		if ((i + 1) % 10 == 0) {
			cout << endl;
		}
	}
	return 0;
}