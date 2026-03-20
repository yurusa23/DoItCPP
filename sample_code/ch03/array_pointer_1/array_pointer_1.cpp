#include <iostream>

using namespace std;

int main() {
  int lotto[45] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
                    16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                    31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45 };

  cout << "lotto[0] Address: " << &lotto[0] << endl; // 인덱스를 보고 주소& 가져오기
  cout << "lotto[1] Address: " << &lotto[1] << endl;
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

  return 0;
}
// lotto 배열이 int형(정수형)으로 만들어졌기 때문입니다. 필기하신 대로 int 자료형 하나는 메모리 공간에서 4바이트의 크기 를 차지합니다. 따라서 lotto 배열의 각 요소는 4바이트씩 떨어져 있습니다.