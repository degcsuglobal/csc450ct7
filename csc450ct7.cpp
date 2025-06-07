/*
 * Critical Thinking 7
 * Daniel Grover
 * CSC 450
 */

using namespace std;
#include <iostream>
#include <thread>


void countUp() {
	for (int i = 0; i <= 20; ++i) {
		std::cout << "Counting up: " << i << std::endl;
	}
}
void countDown() {
	for (int i = 20; i >= 0; --i) {
		std::cout << "Counting down: " << i << std::endl;
	}
}

int main(int argc, char **argv) {
	thread countUpThread(countUp);
	thread countDownThread(countDown);

	countUpThread.join(); // Wait for it to finish
	std::cout << "Counting up is done!" << std::endl;

	countDownThread.join(); // Wait for this one to finish too
	std::cout << "All done counting!" << std::endl;
	return 0;
}
