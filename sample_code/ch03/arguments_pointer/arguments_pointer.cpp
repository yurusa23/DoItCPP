#include <iostream>

using namespace std;

//주소에 의한 호출 : 함수가 매개변수로 전달된 주소를 이용하여, 매개변수로 전달된 주소에 저장된 값을 변경하는 방법

// 포인터 변수를 매개변수로 사용
void change_negative(int* _val) { //2단계 함수에서 주소 받아내기, int* _val은 정수형 포인터 변수를 매개변수로 받음
	// 함수가 외부에서 던진 값을 받는 투입구(매개변수)부분. 자료형이 int*이므로, a와 b의 주소값을 저장됨.
	if (*_val > 0) //3단계 주소로 찾아가 원본 데이터 조작. *역참조 연산자이므로 주소에 저장된 값을 의미함을 기억할 것.
		// *_val은 _val이 가리키는 주소에 저장된 값을 의미. 즉, a와 b의 값이 저장된 주소에 저장된 값을 의미
  {
    *_val = -(*_val); // *_val이 양수인 경우, *_val의 값을 음수로 변경. 
  }
}

int main() { //1단계 메인함수에서 원본 주소를 전달함
	int a = 3, b = -3; // a 변수와 b 변수에 각각 3과 -3을 저장

  cout << "a : " << a << endl;
  cout << "b : " << b << endl;

  change_negative(&a);	// &는 주소 연산자이므로 a변수의 위치(주소) 자체를 함수로 전달. a앞에 주소연산자 &를 붙여서 a의 주소값을 change_negative 함수로 전달
  change_negative(&b);	// &는 주소 연산자이므로 b변수의 위치(주소) 자체를 함수로 전달

  cout << "change_negative(a) : " << a << endl;   
  cout << "change_negative(b) : " << b << endl;

  return 0;
}
