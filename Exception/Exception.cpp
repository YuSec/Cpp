// Exception.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	try {
		throw new std::exception("007");
	}
	catch (std::exception *e) {
		std::cerr << e->what() << std::endl;
	}
	//std::cout << "Hello World!\n";
}
