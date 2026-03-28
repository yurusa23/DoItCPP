#include <iostream>

using namespace std;

int main() {
  int input_number;

  cout << "정수 입력: ";
  cin >> input_number;

  if (input_number > 0) //if,else if, else에 실행 구문이 오직 하나만 있다면 중괄호 {} 생략 가능. if 조건문이 참인 경우에만 다음 한 줄의 실행문이 실행됨
    cout << "입력한 수는 양수 입니다." << endl;
  else if (input_number < 0)
    cout << "입력한 수는 음수 입니다." << endl;
  else
    cout << "입력한 수는 0 입니다." << endl;

  return 0;
}
