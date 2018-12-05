/*
커피를 주문하는 간단한 C++ 프로그램을 작성해보자.
커피 종류는 "에스프레소", "아메리카노", "카푸치노"의 3가지이며 가격은 각각 2000원, 2300원, 2500원이다.
하루에 20000원 이상 벌게 되면 카페를 닫는다. 실행 결과와 같이 작동하는 프로그램을 작성하라.
힌트 : char coffee[100]; int num; cin >> coffee >> num;으로 커피 이름과 잔 수를 입력받으면 된다.
	   또한 커피는 if(strcmp(coffee, "에스프레소")==0)과 같이 비교하면 된다.
*/

#include <iostream>
using namespace std;


int main() {
	char coffee[100]; // 커피 이름
	int num; // 잔 수
	int cost; // 가격
	int result = 0; // 총 판매 가격

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;

	while (result < 20000) {
		cout << "주문>> ";
		cin >> coffee >> num;
		
		if (num > 0) {
			if (strcmp(coffee, "에스프레소") == 0) {
				cost = 2000 * num;
				result += cost;
				cout << cost << "원입니다. 맛있게 드세요" << endl;
			}

			else if (strcmp(coffee, "아메리카노") == 0) {
				cost = 2300 * num;
				result += cost;
				cout << cost << "원입니다. 맛있게 드세요" << endl;
			}

			else if (strcmp(coffee, "카푸치노") == 0) {
				cost = 2500 * num;
				result += cost;
				cout << cost << "원입니다. 맛있게 드세요" << endl;
			}

			else cout << "잘못된 입력입니다." << endl;
		}

		else cout << "잘못된 입력입니다." << endl;
	}

	cout << "오늘 " << result << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;

	return 0;

}