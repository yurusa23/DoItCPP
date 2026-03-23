#include <iostream>
using namespace std;

int main() {
	// new 연산자 : 동적 메모리 할당을 위해 사용되는 연산자
	/*
	* 어떤 데이터형을 원하는지 new연산자에게 알려주면
	* new연산자는 그에 알맞은 크기의 메모리를 할당해주고, 그 메모리의 주소를 반환한다.
	*/
	
	// 자료형* 포인터변수명 = new 자료형; // new 연산자를 사용하여 동적 메모리를 할당하는 일반적인 형태
	int* pointer = new int; // int형 데이터(4바이트)를 저장할 수 있는 메모리를 동적으로 할당하고, 그 주소를 pointer 변수에 저장
	delete pointer; // pointer 변수가 가리키는 메모리를 해제하여, 해당 메모리를 다시 사용할 수 있도록 함

	/* delete 규칙
	1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다.
	2. 같은 메모리 블록을 연달아 delete할 수 없다.
	3. new[]로 메모리를 할당한 경우에는 delete[]로 해제해야 한다.
	
	*/
}