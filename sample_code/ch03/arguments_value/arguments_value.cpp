#include <iostream>

using namespace std;

//매개변수(parameter-받는쪽) : 함수가 데이터를 받기위해 사용하는 변수
//전달인자(argument-주는쪽) : 메인프로그램에서 함수를 호출할 때, 괄호안에 넣어서 함수에 전달하는 데이터(진짜 값)
//매개변수는 자판기, 전달인자는 동전
void change_negative(int _val) { // 매개변수로 일반변수 값을 전달 ㅍ(외주 업체에 일맡기기) 
	if (_val > 0) { // 매개변수로 전달된 값이 양수인 경우
		_val = -_val; // 매개변수로 전달된 값을 음수로 변경
  } 
}

int main() { // main 함수의 시작점
	int a = 3, b = -3; // a와 b 변수에 각각 3과 -3을 저장

	cout << "a : " << a << endl; // a 변수의 값을 출력
	cout << "b : " << b << endl;// b 변수의 값을 출력

	change_negative(a); // a 변수의 값을 3만 복사해서 매개변수로 전달
	change_negative(b); // b 변수의 값을 -3만 복사해서 매개변수로 전달

	cout << "change_negative(a) : " << a << endl; // change_negative 함수가 a 변수의 값을 매개변수로 전달했지만, a 변수의 값은 변경되지 않음
	cout << "change_negative(b) : " << b << endl; // change_negative 함수가 b 변수의 값을 매개변수로 전달했지만, b 변수의 값은 변경되지 않음
	// change_negative 함수가 매개변수로 전달된 값을 변경하려고 했지만, 매개변수로 전달된 값은 복사되어 전달되기 때문에, a와 b 변수의 값은 변경되지 않음
  return 0;
}
