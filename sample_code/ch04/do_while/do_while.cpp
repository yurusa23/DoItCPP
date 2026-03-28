#include <iostream>

using namespace std;
//do-while 반복문은 while문처럼 동작하지만 while 조건식이 구문의 처음이 아닌 마지막에 옴.
int main() {
  int count = 0;
  do { // do-while 반복문을 사용하여 count가 5보다 작은 동안 반복 실행. do-while 반복문은 while 반복문과 달리 조건식이 거짓이더라도 최소한 한 번은 실행됨
    cout << count << endl;
    count++;
  } while (count < 5); // count가 5 이상이 되면 반복문 종료
  return 0;
}
