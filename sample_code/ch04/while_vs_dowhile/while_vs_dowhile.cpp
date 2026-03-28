#include <iostream>

using namespace std;

int main() {
	int i = 0; // i 변수를 0으로 초기화
  while (i < 0) { //0보다 작을때 반복 실행
    cout << "i is less than 0" << endl;
    i++;
  }

  int j = 0; // j 변수를 0으로 초기화
  do { // do-while 반복문을 사용하여 j가 0보다 작은 동안 반복 실행. do-while 반복문은 while 반복문과 달리 조건식이 거짓이더라도 최소한 한 번은 실행됨
    cout << "j is less than 0" << endl;
    j++;
  } while (j < 0); // 조건식이 거짓이지만 반복문은 1회 실행된다.


  return 0;
}
