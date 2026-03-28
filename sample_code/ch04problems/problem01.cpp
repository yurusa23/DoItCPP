#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "숫자를 입력하세요 : ";
	cin >> number;

	if (number > 0) {
		cout << "입력한 숫자는 양수입니다." << endl;

	}
	else {
		cout << "입력한 숫자는 음수입니다." << endl;
	}

	return 0;

}
	
