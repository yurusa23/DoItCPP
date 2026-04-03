#include <iostream>
using namespace std;

int main() {
	try {
		int divisor = 0;

		if (divisor == 0) {
			throw std::runtime_error("0으로 나눌 수 없습니다."); // 예외 발생
		}
		int result = 10 / divisor;
		std::cout << "결과: " << result << std::endl;
	}
	catch (const std::runtime_error& e) {
		// 예외 발생 시 처리
		std::cout << "예외 발생: " << e.what() << std::endl;
	}

	return 0;
}