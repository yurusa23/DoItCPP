//배열변수를 매개변수로 사용하기
#include <iostream>

using namespace std;

int average(int _array[], int _count) { //2단계 average 함수 정의, 매개변수로 정수형 배열과 정수형 변수를 받음. 
	// average 함수는 정수형 배열과 배열의 크기를 매개변수로 받아서, 배열의 평균값을 계산하여 반환하는 함수.
	// _array 함수
  int sum = 0;
  for (int i = 0; i < _count; i++) {
    sum += _array[i];
  }

  return (sum / _count);
}

int main() { //1단계 main 함수에서 배열 변수 선언 및 초기화
  int score[5] = { 90, 75, 80, 100, 65 }; // 

  cout << "평균점수 : " << average(score, 5) << endl;

  return 0;
}
