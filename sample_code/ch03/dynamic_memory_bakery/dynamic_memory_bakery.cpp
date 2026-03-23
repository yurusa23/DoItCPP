#include <iostream>
#include <string>

using namespace std;

int main() {
	int customer_num = 0; // 손님 수를 저장할 변수

  cout << "오늘 방문 손님: ";
  cin >> customer_num;   // 손님 수 입력

  string* bread = new string[customer_num]; // cin을 통해 입력받은 손님 수만큼 
  //string형 데이터를 저장할 수 있는 배열을 동적 할당하여 bread 포인터에 저장 
  // 자료형*변수명 = new 자료형[배열 크기] 형태로 동적 메모리 할당 (string 배열)
  //배열의 첫번째 시작 주소가 bread에 저장됨

  // 입력받은 손님 수만큼 반복
  for (int i = 0; i < customer_num; i++) { // 0부터 손님 수 -1까지 반복
	  bread[i] = "빵_" + to_string(i);       // ‘빵_숫자’ 형태로 빵 이름을 생성하여 bread 배열에 저장 (배열 인덱스 사용)
  } // bread[i]는 bread 배열의 i번째 요소를 나타냄 (배열 인덱스 사용)

  cout << endl << "--생산된 빵--" << endl;
  for (int i = 0; i < customer_num; i++) { // 0부터 손님 수 -1까지 반복
	  cout << *(bread + i) << endl;   // bread 배열의 i번째 요소에 저장된 빵 이름을 출력 (포인터 연산 사용)
  }// bread + i는 bread 배열의 i번째 요소의 주소를 나타냄 (포인터 연산 사용) (bread[i]와 동일)

  delete[] bread;   // string 배열 삭제. 배열에 동적메모리를 할당 했으므로 delete[]로 해제해야함. 그렇지 않으면 메모리 누수 발생

  return 0;
}
