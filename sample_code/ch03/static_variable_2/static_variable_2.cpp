#include <iostream>

using namespace std;

int getNewID() { // 
  static int ID = 0; // 정적 변수 ID는 함수가 처음 호출될 때 한 번만 초기화되고, 이후에는 그 값을 유지
  return ++ID;
}

int main() {
  cout << "ID: " << getNewID() << endl;
  cout << "ID: " << getNewID() << endl;
  cout << "ID: " << getNewID() << endl;
  cout << "ID: " << getNewID() << endl;
  cout << "ID: " << getNewID() << endl;

  return 0;
}
