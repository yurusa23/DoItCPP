#include <iostream> 

using namespace std;

//클래스 설계 (와플 틀 만들기)
class bank { // 클래스 설계(와플 틀 만들기)
private: //접근 지정자. 멤버 변수와 멤버 함수의 접근 권한 설정. private: 외부 접근 차단(-)
  int safe;    // 멤버 변수(은행 금고). 멤버 변수는 객체의 데이터(ex.속도,연료량) 를 나타냄. 외부 접근 차단(-)

public: // 접근 지정자. public: 외부 공개(+)
  bank();      // 기본 생성자 . 객체가 생길 때 실행됨.
  void use_counter(int _in, int _out);   // 멤버 함수(창구 직원). 멤버 함수는 객체의 기능을 나타냄. 외부 공개(+)
};

bank::bank() { // 클래스이름::함수 이름. 클래스 바깥에서 함수의 세부 내용을 정의할때는 클래스 이름과 범위 지정 연산자(::)를 사용하여 정의
  safe = 1000;    // 은행 금고 초기 금액 설정 
  cout << "최초 금고 : " << safe << endl;
  cout << endl;
}

void bank::use_counter(int _in, int _out) {
  safe += _in;     // 입금 
  safe -= _out;    // 출금 

  cout << "입금 : " << _in << endl;
  cout << "출금 : " << _out << endl;
  cout << "금고 : " << safe << endl;
  cout << endl;
}

//객체 생성과 실행흐름(메인함수)
int main() {
  bank my_bank; // my_bank 인스턴스 생성

  my_bank.use_counter(0, 20);     // 출금 20 
  my_bank.use_counter(50, 0);     // 입금 50 
  my_bank.use_counter(100, 50);   // 입금 100, 출금 50 

  return 0;
}
