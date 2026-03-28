#include <iostream>
using namespace std;

int main() {
	int dan;

	while (true) {
		cout << "1부터 9까지의 숫자를 입력하여 구구단을 출력하세요:";
		cin >> dan;

		if (dan >= 1 && dan <= 9) {
			break;
		}
		cout << "유효하지 않은 숫자입니다. 다시 입력해주세요." << endl;
	}

	for (int i = 1; i <= 9; i++) {
		cout << dan << " x " << i << " = " << dan * i << endl;

	}
}