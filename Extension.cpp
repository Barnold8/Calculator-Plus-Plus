#pragma once
#include <iostream>

//choice var is reserved for what calculation is returned. Saves on the amount of functions written

void MainFour(int choice) {

	double x{0}, y{0}; //Each num is init to 0 to avoid any undefined behaviour


	switch(choice) {
	
		case 0:

			std::cout << "Operation x + y, what is x?\t";
			std::cin >> x;
			std::cout << "What is y?\t";
			std::cin >> y;

			std::cout << "x + y =\t" << x + y << std::endl;

			break;
		case 1:
			std::cout << "Operation x - y, what is x?\t";
			std::cin >> x;
			std::cout << "What is y?\t";
			std::cin >> y;

			std::cout << "x - y =\t" << x - y << std::endl;
			break;
		case 2:
			std::cout << "Operation x / y, what is x?\t";
			std::cin >> x;
			std::cout << "What is y?\t";
			std::cin >> y;

			std::cout << "x / y =\t" << x / y << std::endl;
			break;
		case 3:
			std::cout << "Operation x * y, what is x?\t";
			std::cin >> x;
			std::cout << "What is y?\t";
			std::cin >> y;

			std::cout << "x * y =\t" << x * y << std::endl;
			break;

		default:
			break;
	}


}						
