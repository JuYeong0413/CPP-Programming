// 중식당의 주문 과정을 C++ 프로그램으로 작성해보자. 다음 실행 결과와 같이 메뉴와 사람 수를 입력받고 이를 출력하면 된다.
// 잘못된 입력을 가려내는 부분도 코드에 추가하라.

#include <iostream>
using namespace std;


int main() {
	int menu, num;

	cout << "***** 승리장에 오신 것을 환영합니다 *****" << endl;

	while (true) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
		cin >> menu;

		if (menu >= 1 && menu <= 3) {
			cout << "몇인분?";
			cin >> num;

			if (num > 0) {
				switch (menu) {
				case 1:
					cout << "짬뽕 " << num << "인분 나왔습니다" << endl;
					break;
				case 2:
					cout << "짜장 " << num << "인분 나왔습니다" << endl;
					break;
				case 3:
					cout << "군만두 " << num << "인분 나왔습니다" << endl;
					break;
				default:
					break;
				}
			}
			else cout << "잘못된 입력입니다." << endl;
		}

		else if (menu == 4) {
			cout << "오늘 영업은 끝났습니다." << endl;
			break;
		}

		else cout << "다시 주문하세요!!" << endl;
	}

	return 0;

}