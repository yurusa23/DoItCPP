#include <iostream>
using namespace std;

//try는 예외가 발생할 가능성이 있는 일반적인 코드들을 중괄호로 감싸서 실행하는 구간
//throw는 예외가 발생했을 때 예외 객체를 생성하여 예외를 발생시키는 구문
//catch는 throw로 던져진 예외를 받아 수습하는 공간.



int main() { // try 구문과 catch 구문을 이용한 예외 처리 예제
  try { //try구문에 catch 3개 
    int input;
    cout << "정수 중 하나를 입력하세요 : ";
    cin >> input;

    // 입력받은 숫자가 양수이면
	if (input > 0) { // 양수 입력 시 예외 발생
      cout << "throw 1" << endl;
      throw 1;      // 예외 1 발생(정수 형식 예외) 
      cout << "after throw 1" << endl; 
    }

    // 입력받은 숫자가 음수이면
    if (input < 0) {
      cout << "throw -1.0f" << endl;
      throw - 1.0f;   // 예외 1.0f 발생(부동소수점 형식 예외)
      cout << "after throw -1.0f" << endl;
    }

    // 입력받은 숫자가 0이면
    if (input == 0) {
      cout << "throw Z" << endl;
      throw 'Z';    // 예외 Z 발생(문자 형식 예외)
      cout << "after throw Z" << endl;
    }
  }
  catch (int a) {   // 정수 형식 예외 받기. ex) 1일경우 
    cout << "catch " << a << endl;
  }
  catch (float b) {   // 부동소수점 형식 예외 받기
    cout << "catch " << b << endl;
  }
  catch (char c) {   // 문자 형식 예외 받기
    cout << "catch " << c << endl;
  }

  return 0;
}
