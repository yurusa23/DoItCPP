#include <iostream>

using namespace std;

void swap(int a, int b) { // 2단계 swap 함수를 호출. 값에 의한 호출방식을 사용
  // swap 함수 내 교환 전 a, b 값
  cout << "[swap func] before swap, a: " << a << "  b: " << b << endl;

  int temp = a; // 빈 변수 temp를 만들어 a의 값을 저장
  a = b;
  b = temp; // a의 값을 b로, b의 값을 a로 교환

  // swap 함수 내 교환 후 a, b 값
  cout << "[swap func] after swap, a: " << a << "  b: " << b << endl;
}

int main() { // 1단계 main 함수에서 원본 데이터 준비
  int a = 5;
  int b = 10;

  // swap 함수 호출 전 a, b 변수 값
  cout << "[main] before swap, a: " << a << "  b: " << b << endl << endl;

  swap(a, b);

  // swap 함수 호출 후 a, b 변수 값
  cout << endl << "[main] after swap, a: " << a << "  b: " << b << endl; 
  //매개변수로 전달된 일반 변수는 함수 내 지역변수이므로 함수 외부에서는 변동이 없음. 즉 값에 의한 전달에 따른 호출겨로가는 변동이 없음.
  // swap 함수가 a와 b의 값을 교환하려고 했지만, swap 함수는 a와 b의 값을 복사하여 전달받았기 때문에, main 함수에서 a와 b의 값은 변경되지 않음


  return 0;
}
