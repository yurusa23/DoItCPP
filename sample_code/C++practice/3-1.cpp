#include <iostream>
using namespace std;

int main() {
	// 1. 배열 형태의 동적 메모리 할당 (방 100개짜리 건물 짓기)
	int* my_array = new int[100];

	// 2. 배열 사용 (단축키 [] 기호를 써서 편하게 접근)
	// 예시: 0번째 방에 7을, 99번째 방(마지막 방)에 10을 넣음
	my_array[0] = 7;
	my_array[99] = 10;

	cout << "0번 방의 값: " << my_array[0] << endl;
	cout << "99번 방의 값: " << my_array[99] << endl;



	return 0;
}