#include <iostream>

using namespace std;

int main() {
	int* pt_int_array_value = new int[5];   // int형 방 5개를 위한 메모리 할당(배열). 첫번째 방의 시작 주소를 pt_int_array_value에 저장
	// 자료형*변수이름=new 자료형[배열의 크기]

  for (int i = 0; i < 5; i++) {
    pt_int_array_value[i] = i; // 포인터[인덱스]은 역참조 연산자 *와 동일한 역할   
	//배열의 이름은 첫번째 원소의 주소이므로, 연속된 방의 시작 주소를 가진 포인터는 그냥 배열의 이름처럼 똑같이 써도 됨.
  } // 0번방부터 4번방까지 차례대로 0, 1, 2, 3, 4 저장

  for (int i = 0; i < 5; i++) { 
    cout << pt_int_array_value[i] << endl;   // 배열 변수 출력
  }

  delete[] pt_int_array_value;   // 방 하나만 해제하는것이 아닌 모든 방을 해제해야하므로 delete[] 로 해제. 그렇지 않으면 메모리 누수 발생

  return 0;
}
