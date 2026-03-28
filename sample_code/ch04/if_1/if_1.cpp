#include <iostream>

using namespace std;

int main() {
  int input_number; // 스택영역에 지역변수 생성

  cout << "정수 입력: ";
  cin >> input_number;

  if (input_number > 0) { // if 조건문을 사용하여 입력한 수가 양수인지, 음수인지, 또는 0인지 판단
    cout << "입력한 수는 양수 입니다." << endl; // 실행문1
  }
  else if (input_number < 0) { // else if 조건문을 사용하여 입력한 수가 음수인지 판단. 입력한 수가 양수가 아닌 경우에만 else if 조건문이 실행됨
	cout << "입력한 수는 음수 입니다." << endl; // 실행문2
  }
  else { // else 조건문을 사용하여 입력한 수가 0인 경우를 처리
	cout << "입력한 수는 0 입니다." << endl; // 실행문3
  }

  return 0;
}
