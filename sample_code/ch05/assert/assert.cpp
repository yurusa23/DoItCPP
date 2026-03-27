#include <iostream>
#include <cassert>  

using namespace std;

void print_number(int* _pt_int) {
	assert(_pt_int != NULL); // _pt_int이 NULL이 아니어야 한다는 조건을 assert로 표현. _pt_int이 NULL이면 프로그램 종료
  cout << *_pt_int << endl;
}

int main() {
  int a = 100;
  int* b = NULL;
  int* c = NULL;

  b = &a;
  print_number(b);

  // c는 NULL인 상태로 인자 전달
  print_number(c);

  return 0;
}
