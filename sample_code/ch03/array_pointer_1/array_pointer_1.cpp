#include <iostream>

using namespace std;
//배열의 인덱스로 각 원소에 접근하는것 처럼 포인터 연산으로도 각 원소에 접근할 수 있음.
int main() {
  int lotto[45] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
                    16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                    31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45 }; //

  cout << "lotto[0] Address: " << &lotto[0] << endl; // lotto[0]은 lotto 배열의 0번 인덱스에 저장된 데이터인 1이 저장된 메모리 주소값이 출력
  cout << "lotto[1] Address: " << &lotto[1] << endl; // lotto[1]은 lotto 배열에 존재하는 데이터. 데이터 앞에 주소 연산자 &가 붙어있으므로 주소값 출력
  cout << "lotto[2] Address: " << &lotto[2] << endl;
  cout << "lotto[3] Address: " << &lotto[3] << endl;
  cout << "lotto[4] Address: " << &lotto[4] << endl;
  cout << "lotto[5] Address: " << &lotto[5] << endl << endl;

  cout << "(lotto + 0) Address: " << lotto + 0 << endl; //배열의 이름은 0번 인덱스의 시작 주소값이므로 lotto + 0은 lotto[0]의 주소값과 같다.
  cout << "(lotto + 1) Address: " << lotto + 1 << endl;
  cout << "(lotto + 2) Address: " << lotto + 2 << endl;
  cout << "(lotto + 3) Address: " << lotto + 3 << endl;
  cout << "(lotto + 4) Address: " << lotto + 4 << endl;
  cout << "(lotto + 5) Address: " << lotto + 5 << endl;

  // &lotto[0] == lotto + 0
  //&배열_변수[인덱스] == 배열_변수 + 인덱스
  //배열의 이름이 lotto가 첫번째 원소의 주소 &lotto[0]을 가리킴.

  return 0;
}
