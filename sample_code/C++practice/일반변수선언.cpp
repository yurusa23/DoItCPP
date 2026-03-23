#include <iostream>

int main()
{
	char char_value = 'A'; //	char_value 변수는 'A'로 초기화
	int int_value = 10; // int_value 변수는 10으로 초기화
	double double_value = 3.14; //  double_value 변수는 3.14로 초기화

	char* char_pointer = &char_value; // char_pointer 변수는 char_value의 주소를 가리킴
	int* int_pointer = &int_value; // int_pointer 변수는 int_value의 주소를 가리킴
	double* double_pointer = &double_value; // double_pointer 변수는 double_value의 주소를 가리킴

	//이때 &는 피연산자의 주소를 읽어오는 주소 연산자

	return 0;
	//test
}