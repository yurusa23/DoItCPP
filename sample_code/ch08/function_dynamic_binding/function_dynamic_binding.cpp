#include <iostream>
using namespace std;

class character {
public:
  character() : hp(100), power(100)
  {};
  void get_damage(int _damage) {};

protected:
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
  virtual void attack_special(player target_player); // << virtual void 덕분에 forest monster 공격이 10뎀이 아닌 15뎀으로 나옴(동적바인딩의 역할)
};

void monster::attack_special(player target_player) {
  cout << "기본 공격 : 데미지 - 10 hp" << endl;
}

//몬스터 A는 기본 Monster 클래스로부터 상속
class monster_a : public monster, character {
public:
  //상속받은 함수 오버라이딩 
  virtual void attack_special(player target_player) override;
};

void monster_a::attack_special(player target_player) {
  cout << "인텡글 공격 : 데미지 - 15 hp" << endl;
}

int main() {
  player player_1;

  monster mother_monster; // 정적바인딩
  monster_a forest_monster; //객체의 독립적 생성 및 직접 호출

  mother_monster.attack_special(player_1);

  monster* mon = &forest_monster; // 동적바인딩을 위해 부모 클래스 포인터로 업캐스팅
  cout << endl << "부모 클래스로 업케스팅 후 공격" << endl;
  mon->attack_special(player_1); // 부모 클래스 포인터로 호출 시, 자식 클래스의 오버라이딩된 함수가 호출됨(동적 바인딩)

  mon = &mother_monster;
  cout << endl << "부모 클래스로 공격" << endl;
  mon->attack_special(player_1);

  return 0;
}