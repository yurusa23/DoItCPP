#include <iostream>

using namespace std;

int main() {
  char char_value = 'A';
  int int_value = 123;
  double double_value = 123.456;

  char* char_pointer_value = &char_value; // char_value의 시작 메모리 주소값을 char_pointer_value라는 보관함에 저장
  int* int_pointer_value = &int_value; // int_value의 시작 메모리 주소값을 int_pointer_value라는 보관함에 저장
  double* double_pointer_value = &double_value; // double_value의 시작 메모리 주소값을 double_pointer_value라는 보관함에 저장

  // 일반 변수의 데이터 출력
  cout << "char_value: " << char_value << endl; // 'A' 출력
  cout << "int_value: " << int_value << endl; // 123 출력
  cout << "double_value: " << double_value << endl; // 123.456 출력
  cout << endl;

  // 역참조 연산자로 포인터 변수가 가리키는 데이터 출력
  cout << "*char_pointer_value: " << *char_pointer_value << endl; // 여기서 사용된 역참조 연산자 *는 주소를 그대로 가져오는것이 아닌 주소를 보고 해당 주소에 저장된 데이터를 가져오는 역할. 즉 리모콘의 역할을 함.
  cout << "*int_pointer_value: " << *int_pointer_value << endl; // 저장된 주소값으로 가서 int_value의 데이터를 가져와서 출력
  cout << "*double_pointer_value: " << *double_pointer_value << endl; // 저장된 주소값으로 가서 double_value의 데이터를 가져와서 출력
  cout << endl;

  // 역참조 연산자로 원본 데이터 덮어쓰기
  *char_pointer_value = 'Z';
  *int_pointer_value = 321;
  *double_pointer_value = 654.321;

  // 일반 변수의 데이터 출력(업데이트 확인)
  cout << "char_value: " << char_value << endl;
  cout << "int_value: " << int_value << endl;
  cout << "double_value: " << double_value << endl;

  return 0;
}
