#include <iostream>

using namespace std;

int main() {
  for (int count = 0; count < 10; count++) { // for 반복문을 사용하여 count가 0부터 9까지 반복 실행. count가 10 이상이 되면 반복문 종료
    cout << "count: " << count << endl;
    if (count == 5) { // count가 5인 경우에 if 조건문이 참이 되어 실행되는 구문. break문을 사용하여 반복문을 즉시 종료
      cout << "break로 반복문 탈출" << endl;
      break; // break문은 반복문을 즉시 종료시키는 역할을 함. count가 5인 경우에 break문이 실행되어 반복문이 종료되고, 이후의 count 값은 출력되지 않음
    }
  }
  cout << "반복문 종료" << endl;
  return 0;
}
