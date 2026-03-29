#include <iostream>

using namespace std;

//try 블록에서 예외가 발생하면 우선 같은 영역에 있는 catch문을 찾음.

void func_throw() {  
  cout << "func_throw()" << endl;
  cout << "throw -1" << endl;
  throw - 1;   // 정수 형식 예외 던지기. func_throw() 함수에서 예외가 발생
                    // func_throw() 함수에서 예외가 발생하면, func_throw() 함수의 try 블록에서 예외를 처리할 수 있는 catch문이 없으므로, 
                    //func_throw() 함수를 호출한 main() 함수의 try 블록에서 예외를 처리할 수 있는 catch문을 찾음.
  cout << "after throw -1" << endl; //throw 다음줄에 있는 이 코드는 실행되지 않음.
}

int main() { // 먼저 메인함수에서 함수를 호출.
  try {
    func_throw(); 
  }
  catch (int exec) {   // main()의 try블록에서 예외를 처리할 수 있는 catch문이 존재함. 여기서 처리
    cout << "catch " << exec << endl;
  }

  return 0;
}
