#include <iostream>

using namespace std;
//지역 변수는 함수 내부에서 선언된 변수, 함수가 종료되면 소멸. 이러한 특성을 자동지속 이라고 함.
//전역 변수는 함수 외부에서 선언된 변수, 프로그램이 종료될 때까지 존재.

void func() {
  int a = 10;
  static int b = 10; // static을 붙이면 지역변수를 정적변수로 변경.선언된 블록이 끝나더라도 값을 유지.

  a++;
  b++;

  cout << "a : " << a << " , b : " << b << endl;
}

int main() {
  func();
  func();
  func();
  func();
  func();

  return 0;
}
