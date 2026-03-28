#include <iostream>
using namespace std;

int main() {
    int day;

    // 사용자로부터 요일 번호 입력 받기
    cout << "1부터 7까지의 숫자를 입력하여 요일을 확인하세요: ";
    cin >> day;

    // switch 문을 이용하여 요일 출력
    switch (day) {
    case 1:
        cout << "월요일입니다." << endl;
        break;
    case 2:
        cout << "화요일입니다." << endl;
        break;
    case 3:
        cout << "수요일입니다." << endl;
        break;
    case 4:
        cout << "목요일입니다." << endl;
        break;
    case 5:
        cout << "금요일입니다." << endl;
        break;
    case 6:
        cout << "토요일입니다." << endl;
        break;
    case 7:
        cout << "일요일입니다." << endl;
        break;
    default:
        cout << "유효하지 않은 숫자입니다." << endl;
    }

    return 0;
}