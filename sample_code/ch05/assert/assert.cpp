#include <iostream>
#include <cassert>  

using namespace std;

void print_number(int* _pt_int) {
	assert(_pt_int != NULL); // _pt_int이 NULL이 아니어야 한다는 조건을 assert로 표현. _pt_int이 NULL이면 프로그램 종료
  cout << *_pt_int << endl;
}

int main() {
  int a = 100;
  int* b = NULL; // b는 NULL인 상태로 선언. NULL은 포인터가 아무것도 가리키지 않는다는 의미
  int* c = NULL; // c는 NULL인 상태로 선언. 

  b = &a; // b는 a의 주소를 가리키도록 설정. 이제 b는 a의 값을 간접적으로 참조할 수 있음.
  print_number(b); // b는 a의 주소를 가리키므로, print_number() 함수에서 a의 값인 100이 출력됨.

  // c는 NULL인 상태로 인자 전달
  print_number(c); // c는 NULL이므로, print_number() 함수에서 assert(_pt_int != NULL) 조건이 거짓이 되어 프로그램이 종료됨.

  return 0;
}
