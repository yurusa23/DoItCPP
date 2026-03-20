#include <iostream>

using namespace std;

void change_negative(int _val) { // 매개변수로 값을 전달
	if (_val > 0) { // 매개변수로 전달된 값이 양수인 경우
		_val = -_val; // 매개변수로 전달된 값을 음수로 변경
  } 
}

int main() { // 매개변수로 값을 전달하는 경우
	int a = 3, b = -3; // a와 b 변수에 각각 3과 -3을 저장

	cout << "a : " << a << endl; // a 변수의 값을 출력
	cout << "b : " << b << endl;// b 변수의 값을 출력

	change_negative(a); // a 변수의 값을 매개변수로 전달
	change_negative(b); // b 변수의 값을 매개변수로 전달

	cout << "change_negative(a) : " << a << endl; // change_negative 함수가 a 변수의 값을 매개변수로 전달했지만, a 변수의 값은 변경되지 않음
	cout << "change_negative(b) : " << b << endl; // change_negative 함수가 b 변수의 값을 매개변수로 전달했지만, b 변수의 값은 변경되지 않음
	// change_negative 함수가 매개변수로 전달된 값을 변경하려고 했지만, 매개변수로 전달된 값은 복사되어 전달되기 때문에, a와 b 변수의 값은 변경되지 않음
  return 0;
}
