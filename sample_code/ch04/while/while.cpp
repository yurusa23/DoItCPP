#include <iostream>

using namespace std;

int main() {
  int count = 0; // count 변수를 0으로 초기화
  while (count < 5) {// while 반복문을 사용하여 count가 5보다 작은 동안 반복 실행. count가 5 이상이 되면 반복문 종료
	  cout << "count : " << count << endl; // count 변수의 현재 값을 출력. 처음에는 0이 출력되고, 반복할 때마다 count가 1씩 증가하여 4까지 출력됨
    count++; // count 변수를 1씩 증가시킴. count++은 count = count + 1과 같은 의미
  }
  return 0;
}
