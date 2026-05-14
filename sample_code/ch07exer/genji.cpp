#include <iostream>
using namespace std;

// [1] 컴퓨터에게 "이따가 메르시라는 도면이 나올 거야"라고 미리 알려줌 (전방 선언)
class Mercy;

// [2] 빠져있던 부모 도면 (Hero)
class Hero {
public:
    Hero() {
        cout << "[시스템] 영웅 기본 뼈대 조립." << endl;
    }
    virtual ~Hero() {
        cout << "[시스템] 영웅 뼈대 해체 완료." << endl;
    }

    virtual void ultimate_skill() {
        cout << "기본 궁극기" << endl;
    }
};

// [3] 작성하셨던 겐지 도면 (Genji)
class Genji : public Hero {
    friend class Mercy; // 메르시에게 내 비밀(체력) 접근 권한을 줌

protected:
    int hp;
    int shuriken_count;

public:
    Genji() {
        hp = 200;
        shuriken_count = 30;
        cout << "[스폰] 겐지가 함께한다. (체력: " << hp << ", 표창: " << shuriken_count << ")" << endl;
    }

    virtual ~Genji() override {
        cout << "[데스캠] 표창 메모리 해제. 겐지 쓰러짐." << endl;
    }

    void ultimate_skill() override {
        cout << "류진노 켄오 쿠라에! (용검 발동)" << endl;
    }

    void attack() {
        shuriken_count -= 3;
        cout << "표창 3개 일직선 투척! (남은 표창: " << shuriken_count << ")" << endl;
    }

    void attack(int spread_angle) {
        shuriken_count -= 3;
        cout << "표창 3개 " << spread_angle << "도 부채꼴 투척! (남은 표창: " << shuriken_count << ")" << endl;
    }

    Genji& receive_heal(int amount) {
        this->hp += amount;
        cout << "자가 치유. 현재 체력: " << this->hp << endl;
        return *this;
    }
};

// [4] 빠져있던 친구 도면 (Mercy)
class Mercy {
public:
    void heal_genji(Genji& target) {
        // 원래 외부에서는 겐지의 hp(protected)를 건드릴 수 없지만,
        // friend로 등록되었기 때문에 겐지의 몸속 수치를 직접 조작 가능!
        target.hp += 50;
        cout << "메르시의 특별 케어! 겐지 체력 50 증가. (현재 체력: " << target.hp << ")" << endl;
    }
};

// [5] 실제 게임이 돌아가는 실전 무대 (main)
int main() {
    cout << "--- 게임 시작 ---" << endl;

    Genji player1;  //클래스이름 객체이름. 메모리에 진짜 겐지 객체를 찍어냄, 스택 메모리 영역에 저장
    Mercy player2; // 메모리에 진짜 메르시 객체를 찍어냄, 스택메모리 영역에 저장

    cout << "\n--- 전투 돌입 ---" << endl;
    player1.attack(); //객체이름.행동버튼()       // 1. 좌클릭 공격 (매개변수 없음)
    player1.attack(45);      // 2. 우클릭 공격 (매개변수 45도)
    player1.ultimate_skill(); // 3. 오버라이딩된 궁극기.
    // player1의 부모클래스에는 기본 궁극기가 들어가 있으나 자식도면에서 오버라이딩되어 용검 사용

    cout << "\n--- 치유 및 콤보 ---" << endl;
    // 4. this 포인터를 이용한 꼬리잡기(체이닝) 연속 힐
    player1.receive_heal(20).receive_heal(10);

    // 5. 프렌드(메르시)가 겐지의 숨겨진 체력을 강제로 올림
    player2.heal_genji(player1);

    cout << "\n--- 게임 종료 ---" << endl;
    return 0; // 이 지점에 도달하면 컴퓨터가 알아서 소멸자들을 호출함
}