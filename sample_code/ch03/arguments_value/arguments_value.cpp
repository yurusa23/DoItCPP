// 일반변수를 매개변수로 활용하는 과정
#include <iostream>

using namespace std;

void change_negative(int _val) { // change_negative 함수 정의, 매개변수로 정수형 변수 _val을 받음
  if (_val > 0) { // 매개변수 _val이 change_negative 함수 내부에서만 효력이 있음.
    _val = -_val;// _val이 양수인 경우, _val의 값을 음수로 변경.
	// 하지만, _val은 change_negative 함수의 매개변수로 전달된 값이 복사되어 전달되기 때문에, _val의 값을 변경해도 a와 b 변수의 값은 변경되지 않음.
  }
}

int main() {
	int a = 3, b = -3; // a 변수와 b 변수에 각각 3과 -3을 저장

	cout << "a : " << a << endl; // a 변수의 값을 출력
	cout << "b : " << b << endl;// b 변수의 값을 출력

  cout << "change_negative(a) : " << a << endl;
  cout << "change_negative(b) : " << b << endl;

	cout << "change_negative(a) : " << a << endl; // change_negative 함수가 a 변수의 값을 매개변수로 전달했지만, a 변수의 값은 변경되지 않음
	cout << "change_negative(b) : " << b << endl; // change_negative 함수가 b 변수의 값을 매개변수로 전달했지만, b 변수의 값은 변경되지 않음
	// change_negative 함수가 매개변수로 전달된 값을 변경하려고 했지만, 매개변수로 전달된 값은 복사되어 전달되기 때문에, a와 b 변수의 값은 변경되지 않음
  return 0;
}
