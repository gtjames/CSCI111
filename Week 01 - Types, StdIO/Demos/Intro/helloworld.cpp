/*=================================================
  Hello World program
  By: Ram Basnet
  Date: June 24, 2020
  Copyright: MIT License
  
  The program prints "Hello World!" on the console
===================================================*/

// include required libraries/header files
#include <iostream>

// one main function is always required in a C++ program
int main() // main entry to the program 
{
  std::string name;

	// output/print Hello World!
	std::cout << "Hello World!" << std::endl;
	std::cout << "What is your name? "; // << std::flush;
	std::cin >> name;
	std::cout << "Hello " << name << std::endl;
  
	return 0;
}