#include <iostream>
using namespace std;

void process(int value) {
	try {
		if (value < 0) { // value가 음수인 경우 예외 발생
			throw std::runtime_error("음수는 처리할 수 없습니다."); // 예외 객체 생성하여 예외 발생
		}
		std::cout << "value : " << value << std::endl;
	}
	catch (const std::runtime_error& e) { 
		std::cout << "예외 발생: " << e.what() << std::endl; // 예외 메시지 출력
	}

	// value가 음수인 경우 예외를 던지도록 처리
	// 예외가 발생하면 "예외 발생!" 출력, 발생하지 않으면 value 출력
}

int main() {
	process(10);
	process(-5);
	return 0;
}