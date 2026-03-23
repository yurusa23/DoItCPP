#include <iostream>

using namespace std;

// 매개변수를 레퍼런스 변수로 선언
void swap(int& ref_a, int& ref_b) { 
	//swap 함수의 매개변수를 int& ref_a, int& ref_b로 선언.
	//int& ref_a와 int& ref_b는 각각 a와 b의 레퍼런스 변수 
	
  // 교환 전 a, b 값
  cout << "[swap func] before swap, ref_a: " << ref_a << "  ref_b : " << ref_b << endl;

  int temp = ref_a;
  ref_a = ref_b;
  ref_b = temp;

  // 교환 후 a, b 값
  cout << "[swap func] after swap, ref_a: " << ref_a << "  ref_b : " << ref_b << endl;
}

int main() { // main에서
  int a = 5;
  int b = 10;

  // swap 함수 호출 전 a, b 값
  cout << "[main] before swap, a: " << a << "  b: " << b << endl << endl;

  swap(a, b); 
  // swap 함수 호출, a와 b의 값을 매개변수로 전달.
  // swap 함수의 매개변수는 레퍼런스 변수이므로, a와 b의 값을 직접 참조하여 교환. 즉, swap 함수가 a와 b의 값을 교환하면, main 함수에서 a와 b의 값도 변경됨.


  // swap 함수 호출 후 a, b 값
  cout << endl << "[main] after swap, a: " << a << "  b: " << b << endl;

  return 0;
}
