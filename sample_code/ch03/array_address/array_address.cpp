#include <iostream>

using namespace std;

int main() {
  int lotto[45] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
                    16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                    31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45 };
  //배열의 이름은 첫번째 배열(인덱스 0)의 메모리 주소값을 가지고 있다. lotto 배열의 이름인 lotto는 lotto[0]의 메모리 주소값과 같다.
  cout << "lotto[0] Address: " << &lotto[0] << endl; // lotto[0]은 lotto 배열의 0번 인덱스에 저장된 데이터인 1이 저장된 메모리 주소값이 출력
  cout << "lotto[1] Address: " << &lotto[1] << endl; // lotto[1]은 lotto 배열의 1번 인덱스에 저장된 데이터인 2가 저장된 메모리 주소값이 출력
  cout << "lotto[2] Address: " << &lotto[2] << endl; // lotto[2]는 lotto 배열의 2번 인덱스에 저장된 데이터인 3이 저장된 메모리 주소값이 출력
  cout << "lotto[3] Address: " << &lotto[3] << endl; // lotto[3]은 lotto 배열의 3번 인덱스에 저장된 데이터인 4가 저장된 메모리 주소값이 출력
  cout << "lotto[4] Address: " << &lotto[4] << endl; // lotto[4]는 lotto 배열의 4번 인덱스에 저장된 데이터인 5가 저장된 메모리 주소값이 출력
  cout << "lotto[5] Address: " << &lotto[5] << endl; // lotto[5]는 lotto 배열의 5번 인덱스에 저장된 데이터인 6이 저장된 메모리 주소값이 출력

  return 0;
}
