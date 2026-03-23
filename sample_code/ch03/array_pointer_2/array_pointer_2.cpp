#include <iostream>

using namespace std;

int main() {
	int array[5] = { 1, 2, 3, 4, 5 }; // 5개의 정수를 저장할 수 있는 배열 선언
  int* pointer_array = array; // pointer_array는 array 배열의 첫 번째 요소의 주소값을 가리킴

  cout << "array: " << array << endl; // array는 배열의 이름, 배열의 첫번째 요소 1의 주소값이 출력
  cout << "pointer_array: " << pointer_array << endl << endl; // pointer_array는 array 배열의 첫번째 요소 1의 주소값을 출력

  cout << "sizeof(array): " << sizeof(array) << endl; // array배열은 5개의 int형 요소를 가지고 있으므로 5 * 4 = 20바이트의 크기를 차지, sizeof(array)는 20이 출력
  cout << "sizeof(pointer_array): " << sizeof(pointer_array) << endl; //pointer_array는 int형 포인터 이므로 4바이트의 크기를 차지.

  // 배열과 포인터는 다르지만 배열의 이름을 사용해 배열의 첫번째 요소의 주소값을 가리키는 포인터로 사용할 수 있음
  // 하지만 포인터는 배열의 크기를 알 수 없으므로 sizeof를 사용하면 포인터 자체의 크기만 나옴


  return 0;
}
