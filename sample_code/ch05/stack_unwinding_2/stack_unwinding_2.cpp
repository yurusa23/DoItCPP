#include <iostream>

using namespace std;

void func_throw() { // func_throw() 함수에서 예외가 발생, // 스택 영역에서 func_throw() 함수가 func_2() 함수 위에 기록됨
  cout << endl;
  cout << "func_throw() 함수 내부" << endl;
  cout << "throw -1" << endl;
  throw - 1;   // func_throw() 함수에서 예외발생, 하지만 catch문이 존재하지 않으므로 스택풀기 시작. func_2 호출후 func_throw는 스택에서 제거됨
  cout << "after throw -1" << endl;
}

void func_2() { //스택 영역에서 func_1 위에 기록됨. func_1 호출 후 func_2는 스택에서 제거됨.
  cout << endl;
  cout << "func_2() 함수 내부" << endl;
  cout << "func_throw() 호출" << endl;
  func_throw();
  cout << "after func_throw()" << endl;
}

void func_1() { // 스택 영역에서 main 위에 기록됨. main호출 후 func_1은 스택에서 제거됨.
  cout << endl;
  cout << "func_1() 함수 내부" << endl;
  cout << "func_2() 호출" << endl;
  func_2();
  cout << "after func_2()" << endl;
}

// main 함수가 스택 맨 아래 기록됨.
int main() { // func_1() 함수를 호출하여 func_1() 함수 내부에서 func_2() 함수를 호출하고, func_2() 함수 내부에서 func_throw() 함수를 호출하여 예외가 발생하는 상황
  cout << "main 내부" << endl;

  try { // main() 함수의 try 블록에서 func_1() 함수를 호출하여 예외가 발생하는 상황
    cout << "func_1() 호출" << endl;
    func_1();
  }
  catch (int exec) {   // func_1에도 catch문이 존재하지 않으므로 최초 호출자 main으로 이동해 예외처리함.
    cout << endl;
    cout << "catch " << exec << endl;
  }

  return 0;
}
