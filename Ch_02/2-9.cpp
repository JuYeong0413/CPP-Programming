<<<<<<< HEAD
// 이름, 주소, 나이를 입력받아 다시 출력하는 프로그램을 작성하라.

#include <iostream>
#include <string>
using namespace std;

int main() {
	string name, address;
	int age;

	cout << "이름은?";
	getline(cin, name);
	cout << "주소는?";
	getline(cin, address);
	cout << "나이는?";
	cin >> age;
	cout << name << ", " << address << ", " << age << "세" << endl;

	return 0;
=======
// 이름, 주소, 나이를 입력받아 다시 출력하는 프로그램을 작성하라.

#include <iostream>
#include <string>
using namespace std;

int main() {
	string name, address;
	int age;

	cout << "이름은?";
	getline(cin, name);
	cout << "주소는?";
	getline(cin, address);
	cout << "나이는?";
	cin >> age;
	cout << name << ", " << address << ", " << age << "세" << endl;

	return 0;
>>>>>>> 87080f397353b33f54598cf71212766956f8dbfd
}