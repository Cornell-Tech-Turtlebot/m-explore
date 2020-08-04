#include <chrono>
#include <iostream>

int main() {
	std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
	for (int i = 0; i < 1000; ++i) {
		i = i + 1;
	}
	std::chrono::system_clock::time_point end = std::chrono::system_clock::now();
	std::chrono::duration<double> diff = end - start;
	std::cout << "duration: " << diff.count();
}
