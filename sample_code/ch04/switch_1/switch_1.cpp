#include <iostream> // 입출력 관련 라이브러리

using namespace std;

int main() {
  int input_number;

  cout << "1 ~ 5 정수 입력: ";
  cin >> input_number; // 사용자로부터 정수 입력 받음

  switch (input_number) { // switch 조건문을 사용하여 입력한 수에 따라 다른 메시지를 출력
  case 1:
    cout << "입력한 수는 1 입니다." << endl;
    break;

  case 2:
    cout << "입력한 수는 2 입니다." << endl;
    break;

  case 3:
    cout << "입력한 수는 3 입니다." << endl;
    break;

  case 4:
    cout << "입력한 수는 4 입니다." << endl;
    break;

  case 5:
    cout << "입력한 수는 5 입니다." << endl;
    break;

  default:
    cout << "입력한 수는 1 ~ 5 범위 밖입니다." << endl; // default는 switch 조건문에서 case에 해당하지 않는 모든 경우를 처리. ex)6을 넣는경우
    break;
  }

  return 0;
}
