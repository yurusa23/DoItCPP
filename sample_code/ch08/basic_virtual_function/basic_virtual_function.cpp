#include <iostream>
using namespace std;

class character {//캐릭터 클래스`
public:
  character() : hp(100), power(100) {}; //

protected: //체력과 공격력을 나타내는 멤버 변수
  int hp;
  int power;
};

//Player 클래스
class player : public character {
public:
  player() {};
};

//기본 Monster 클래스
class monster {
public:
  monster() {};
  void attack(player target_player) {};
  virtual void attack_special(player target_player);   // 가상 함수 선언
};

void monster::attack_special(player target_player) { // 가상 함수 정의
	cout << "기본 공격 : 데미지 - 10 hp" << endl; // 기본 공격은 10 hp의 데미지를 입히는 것으로 정의
}

//몬스터 A는 기본 Monster 클래스로부터 상속
class monster_a : public monster, character { 
public:
  //가상 함수 오버라이드 선언 
	virtual void attack_special(player target_player) override; // 컴퓨터(컴파일러)에게 "내가 지금부터 부모의 스킬을 개조(덮어쓰기)할 테니, 똑바로 검사해 줘!"라고 제출
};

// 가상 함수 오버라이딩
void monster_a::attack_special(player target_player) { // 이 스킬은 몬스터a의 고유스킬
  cout << "인텡글 공격 : 데미지 - 15 hp" << endl;
}

//몬스터 B는 기본 Monster 클래스로부터 상속
class monster_b : public monster, character {
public:
  //상속받은 함수 오버라이딩
  virtual void attack_special(player target_player) override;
};

void monster_b::attack_special(player target_player) {
  cout << "가상 공격 : 데미지 - 0 hp" << endl;
}

//몬스터 C는 기본 Monster 클래스로부터 상속
class monster_c : public monster, character {
public:
  //상속받은 함수 오버라이딩
  virtual void attack_special(player target_player) override;
};

void monster_c::attack_special(player target_player) {
  cout << "강력 뇌전 공격 : 데미지 - 100 hp" << endl;
}

int main() {
  player player_1;

  monster_a forest_monster;

  monster& mon = forest_monster;   // 업캐스팅 발생. 업캐스팅이란 자식캐릭터에게 부모의 이름표를 붙여 퉁치는것.
  monster_a& mon_a = forest_monster;

  cout << endl << "부모 클래스로 업캐스팅 후 공격" << endl;
  mon.attack_special(player_1);  // monster_a의 오버라이딩 함수 호출. 즉 진짜 알맹이가 monster_a임을 확인하고 자식클래스의 인텡글 공격을 발동함

  cout << endl << "자식 클래스로 공격" << endl;
  mon_a.attack_special(player_1);

  cout << endl << "범위 연산자로 공격" << endl;
  mon_a.monster::attack_special(player_1);

  return 0;
}