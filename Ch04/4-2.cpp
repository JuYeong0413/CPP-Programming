// 정수 공간 5개를 배열로 동적 할당받고, 정수를 5개 입력받아 평균을 구하고 출력한 뒤 배열을 소멸시키도록 main() 함수를 작성하라.

#include <iostream>
using namespace std;

int main() {
	int *array = new int[5];
	int sum = 0;
	double average;

	cout << "정수 5개 입력>> ";
	for (int i = 0; i < 5; i++) {
		cin >> array[i];
		sum += array[i];
	}
	
	average = (double)sum / 5.0;
	cout << "평균 " << average << endl;

	delete[] array;
}