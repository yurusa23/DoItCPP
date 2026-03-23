#include <iostream>

using namespace std;

int main() {
  int value = 10;
  int& ref_value = value; // value 변수의 레퍼런스 변수 ref_value 선언, ref_value는 value 변수를 참조

  int value2 = 20;
  ref_value = value2;   
  // ref_value에 value2의 값을 대입, ref_value는 value 변수를 참조하므로, value 변수의 값이 value2의 값으로 변경됨
  //ref_value가 value2의 별명으로 바뀌는것이 아닌 원본 value 값이 value2로 덮어씌워짐
  //레퍼런스의 재지정 불가능함
  //따라서 대상을 바꾸고 싶을때는 포인터를 사용

  cout << "value: " << value << endl;
  cout << "ref_value: " << ref_value << endl;

  return 0;
}
