#include <iostream>

using namespace std;
//구조체 : 다른 자료형이 허용되는 데이터의 집합
//cf)배열은 같은 자료형의 집합임

struct Person { // person이라는 이름의 구조체 정의 (string, int, float, float 자료형으로 구성된 구조체
  string name;    // 이름
  int age;        // 나이
  float height;   // 키
  float weight;   // 몸무게
};

void check_age(Person* _adult, int _count) { // 4단계 check_age 함수 정의, 매개변수로 Person 구조체의 포인터와 정수형 변수를 받음
  for (int i = 0; i < _count; i++) { //for문을 이용하여 _adult 배열의 각 요소에 접근, _count는 배열의 크기를 나타냄
    if (_adult[i].age >= 25) { // 나이가 25 이상인 경우에만 해당 요소의 정보를 출력. adult[i]라는 포인터 열쇠를 이용해 i번째 데이터에 접근.
      cout << "name : " << _adult[i].name << endl;
      cout << "age : " << _adult[i].age << endl;
      cout << "height : " << _adult[i].height << endl;
      cout << "weight : " << _adult[i].weight << endl;
    }
  }
}

int main() {
	Person adult[3] = { // 2단계, adult[3]은 3개의 Person 구조체를 저장할 수 있는 배열
      {"Brain", 24, 180, 70},
      {"Jessica", 22, 165, 55},
      {"James", 30, 170, 65},
  };

	check_age(adult, 3); // 3단계, check_age 함수 호출, adult 배열은 배열의 시작 주소를 가리킴. 함수는 이 주소를 받기위해 Person* adult를 준비

  return 0;
}
