// cout�� << �����ڸ� �̿��Ͽ� ������ ���� �������� ����ϴ� ���α׷��� �ۼ��϶�.

#include <iostream>
using namespace std;

int main() {
	int result;

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			result = j * i;
			cout << j << 'x' << i << '=' << result << '\t';
			if (j == 9) {
				cout << endl;
			}
		}
	}
	return 0;
}