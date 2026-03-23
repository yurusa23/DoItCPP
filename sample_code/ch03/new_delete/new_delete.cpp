#include <iostream>
using namespace std;

int main()
{
	int* dd_int_value = new int;

	*dd_int_value = 111;
	cout << *dd_int_value << endl;

	delete dd_int_value;
	return 0;
}

/*int main() {
	int* pt_int_value = new int;    // heap 영역에 int형 변수 1개를 위한 메모리 할당

	*pt_int_value = 100; // 할당된 메모리에 100 저장
	cout << *pt_int_value << endl; // 할당된 메모리에 저장된 값 출력

	delete pt_int_value;    // 할당된 메모리 해제

  return 0;
} */