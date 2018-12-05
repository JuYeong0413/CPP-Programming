// int Ÿ���� ������ ��üȭ�� Integer Ŭ������ �ۼ��϶�. Integer�� ��� ��� �Լ��� �ڵ� �ζ������� �ۼ��϶�.
// Integer Ŭ������ Ȱ���ϴ� �ڵ�� ������ ����.
// ��Ʈ : ���� 2�� ��Ʈ�� �����ϰ� <string> ��� ������ stoi() �Լ��� �̿��ϸ� ���ϴ�.

#include <iostream>
#include <string>
using namespace std;

class Integer {
private:
	int num;

public:
	Integer();
	Integer(int n);
	Integer(string s);
	int get();
	void set(int n);
	bool isEven();
};

Integer::Integer() {

}

Integer::Integer(int n) {
	num = n;
}

Integer::Integer(string s) {
	num = stoi(s);
}

int Integer::get() {
	return num;
}

void Integer::set(int n) {
	num = n;
}

bool Integer::isEven() {
	if (num % 2 == 0) return true;
	else return false;
}

int main() {
	Integer n(30);
	cout << n.get() << ' '; // 30 ���
	n.set(50);
	cout << n.get() << ' '; // 50 ���

	Integer m("300");
	cout << m.get() << ' '; // 300 ���
	cout << m.isEven(); // true(������ 1)���
}