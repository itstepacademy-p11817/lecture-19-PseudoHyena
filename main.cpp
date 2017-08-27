#include "task.h"
#include <iostream>
#include <string>

int main() {
	task obj;
	std::cout << "Input a number of task with prefix 'c' or 'd' (c1 - c7, d1 - d4) OR \"sBs\" to step-by-step tasks execution: ";
	while (true) {
		std::string str;
		std::cin >> str;
		if (str == "c1") {
			obj.z1();
			break;
		}
		else if (str == "c2") {
			obj.z2();
			break;
		}
		else if (str == "c3") {
			obj.z3();
			break;
		}
		else if (str == "c4") {
			obj.z4();
			break;
		}
		else if (str == "c5") {
			obj.z5();
			break;
		}
		else if (str == "c6") {
			obj.z6();
			break;
		}
		else if (str == "c7") {
			obj.z7();
			break;
		}
		else if (str == "d1") {
			obj.dopz1();
			break;
		}
		else if (str == "d2") {
			obj.dopz2();
			break;
		}
		else if (str == "d3") {
			obj.dopz3();
			break;
		}
		else if (str == "d4") {
			std::cout << "There is no task number 4!" << std::endl;
		}
		else if (str == "sBs") {
			std::cout << "Task1:" << std::endl;
			obj.z1();
			std::cout << "Task2:" << std::endl;
			obj.z2();
			std::cout << "Task3:" << std::endl;
			obj.z3();
			std::cout << "Task4:" << std::endl;
			obj.z4();
			std::cout << "Task5:" << std::endl;
			obj.z5();
			std::cout << "Task6:" << std::endl;
			obj.z6();
			std::cout << "Task7:" << std::endl;
			obj.z7();
			std::cout << "Additional Task1:" << std::endl;
			obj.dopz1();
			std::cout << "Additional Task2:" << std::endl;
			obj.dopz2();
			std::cout << "Additional Task3:" << std::endl;
			obj.dopz3();
			break;
		}
	}
	
	return 0;
}