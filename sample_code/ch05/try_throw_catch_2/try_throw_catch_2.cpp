#include <iostream>
using namespace std;

//어떤 데이터 형식의 예외를 throw로 던질지 모르는 경우, catch 구문에서 ...을 이용하여 모든 예외를 받을 수 있음.

int main() {
  try {
    int input;
    cout << "정수 중 하나를 입력해보세요 : ";
    cin >> input;

    // 입력받은 숫자가 양수이면
    if (input > 0) {
      cout << "throw 1" << endl;
      throw 1;   // 예외 1 발생(정수 형식 예외)
    }

    // 입력받은 숫자가 음수이면
    if (input < 0) {
      cout << "throw -1.0f" << endl;
      throw - 1.0f;   // 예외 1.0f 발생(부동소수점 형식 예외)
    }

    // 입력받은 숫자가 0이면
    if (input == 0) {
      cout << "throw Z" << endl;
      throw 'Z';   // 예외 Z 발생 (문자 형식 예외)
    }
  }
  catch (int a) {   // 정수 형식 예외 받기
    cout << "catch " << a << endl;
  }
  catch (...) {   // 명시하지 않은 나머지 모든 예외를 받아서 처리 가능 (음수를 입력했거나 0을 입력했을때)
    cout << "catch all" << endl;
  }

  return 0;
}
