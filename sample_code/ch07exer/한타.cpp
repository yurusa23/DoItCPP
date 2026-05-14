#include <iostream>
#include <list> // 명단(리스트)을 만들기 위한 부품
using namespace std;

// 과녁판 역할을 할 훈련용 봇
class TargetDummy {
public:
    TargetDummy() {}
};

// [부모 도면] 영웅의 기본 규칙
class Hero {
public:
    Hero() {}

    // 1. 일반 가상 함수: 기본 무기가 있지만, 원하면 개조(오버라이딩) 가능
    virtual void normal_attack(TargetDummy target) {
        cout << "기본 근접 공격 : 데미지 30" << endl;
    }

    // 2. 순수 가상 함수: "영웅이라면 무조건 고유의 궁극기를 제출해라!" (강제)
    virtual void ultimate_skill() = 0;
};

// [자식 도면 1] 겐지
class Genji : public Hero {
public:
    void normal_attack(TargetDummy target) override {
        cout << "표창 투척 : 데미지 28" << endl;
    }
    void ultimate_skill() override { // 빈칸 채우기 (의무)
        cout << "류진노 켄오 쿠라에! (용검 발동)" << endl;
    }
};

// [자식 도면 2] 트레이서
class Tracer : public Hero {
public:
    void normal_attack(TargetDummy target) override {
        cout << "펄스 쌍권총 : 데미지 12" << endl;
    }
    void ultimate_skill() override {
        cout << "내 마음이야! (펄스 폭탄 부착)" << endl;
    }
};

// [자식 도면 3] 라인하르트
class Reinhardt : public Hero {
public:
    void normal_attack(TargetDummy target) override {
        cout << "로켓 해머 : 데미지 85" << endl;
    }
    void ultimate_skill() override {
        cout << "망치 나가신다! (대지 분쇄)" << endl;
    }
};

int main() {
    // 1단계: 영웅들을 하나로 묶어 통제할 '팀 명단' 생성
	list<Hero*> team_list; // Hero 도면을 따르는 영웅들의 주소표를 담을 명단(리스트) 생성

    // 2단계: 영웅들을 스폰시키고, 그 주소표(&)를 명단에 기록
    Genji player1; // 메모리에 진짜 겐지 객체를 찍어냄, 스택 메모리 영역에 저장
    team_list.push_back(&player1); //&player1은 겐지 객체의 주소표. 그 주소표를 명단에 기록

    Tracer player2;
    team_list.push_back(&player2);

    Reinhardt player3;
    team_list.push_back(&player3);

    cout << "--- 오버워치 한타 교전 시작 ---" << endl;

    // 3단계: 명단을 처음부터 끝까지 훑으며 전원 궁극기 발동 지시!
    for (auto item : team_list) {
        item->ultimate_skill();
    }

    return 0;
}