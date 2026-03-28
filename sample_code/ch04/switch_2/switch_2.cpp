#include <iostream>

using namespace std;

int main() {
  int input_number;

  cout << "1 ~ 5 정수 입력: ";
  cin >> input_number;

  switch (input_number) {// switch 조건문을 사용하여 입력한 수에 따라 다른 메시지를 출력. break문이 없어서 case 1부터 default까지 모든 실행문이 실행됨
  case 1: // case 1이 참인 경우에 실행되는 구문. break문이 없어서 case 1부터 default까지 모든 실행문이 실행됨
    cout << "입력한 수는 1 입니다." << endl;

  case 2: // case 2가 참인 경우에 실행되는 구문. break문이 없어서 case 2부터 default까지 모든 실행문이 실행됨
    cout << "입력한 수는 2 입니다." << endl;

  case 3:
    cout << "입력한 수는 3 입니다." << endl;

  case 4:
    cout << "입력한 수는 4 입니다." << endl;

  case 5:
    cout << "입력한 수는 5 입니다." << endl;

  default: // default는 switch 조건문에서 case에 해당하지 않는 모든 경우를 처리
    cout << "입력한 수는 1 ~ 5 범위 밖입니다." << endl;
  }

  return 0;
}
