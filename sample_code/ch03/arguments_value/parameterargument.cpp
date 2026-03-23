#include <iostream>

using namespace std;

void helloCPP(int, int); // 매개변수의 이름이 없는 함수 선언

int main() {

	int times, times2; // times와 times2 변수 선언
	cout << " 정수를 입력하세요 : \n"; // 사용자에게 정수를 입력하라는 메시지 출력
	cin >> times;

	cout << " 정수를 한번 더 입력하세요 : \n"; // 사용자에게 정수를 입력하라는 메시지 출력
	cin >> times2;
	helloCPP(times, times2); // helloCPP 함수 호출, times와 times2 변수의 값을 매개변수로 전달
	return 0;

}

void helloCPP(int times, int times2) {

 // 매개변수의 이름이 없는 함수 정의
	for (int i = 0; i < times; i++) { // times 변수의 값만큼 반복
		cout << "Hello\n "; // "Hello" 문자열 출력
		for (int j = 0; j < times2; j++) { // times2 변수의 값만큼 반복
			cout << "C++\n "; // "C++" 문자열 출력
		}
	}
}