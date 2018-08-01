/*
���࿡�� ����ϴ� ���α׷��� �ۼ��ϱ� ����, ���� ���� �ϳ��� ǥ���ϴ� Ŭ���� Account�� �ʿ��ϴ�.
���� ������ ������ ����, ���� ��ȣ, �ܾ��� ��Ÿ���� 3 ��� ������ �̷������.
main() �Լ��� ���� ����� ������ ������ Account Ŭ������ �ۼ��϶�.
��Ʈ : Account�� name, id, balance(�ܾ�)�� 3 ��� ������ ������, getOwner(), deposit(),
	   withdraw(), inquiry()�� 3 ��� �Լ��� ������ Ŭ������ ����� �ȴ�.
*/

#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string name;
	int id;
	int balance = 0;
	
public:
	Account(string s, int n, int m);
	string getOwner();
	void deposit(int m);
	int withdraw(int m);
	int inquiry();
};

Account::Account(string s, int n, int m) {
	name = s;
	id = n;
	balance = m;
}

string Account::getOwner() {
	return name;
}

void Account::deposit(int m) {
	balance += m;
}

int Account::withdraw(int m) {
	balance -= m;
	return m;
}

int Account::inquiry() {
	return balance;
}

int main() {
	Account a("kitae", 1, 5000);   // id 1��, �ܾ� 5000��, �̸��� kitae�� ���� ����
	a.deposit(50000);			   // 50000�� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000); // 20000�� ���. withdraw()�� ����� ���� �ݾ� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}