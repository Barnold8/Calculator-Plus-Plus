#pragma once
#include "Calc.h"
#include <string>

namespace Calc {





	void visual(double value, bool first) {


		const int calcAmount{ 20 };
		bool hasValue{ true };


		std::string ART[calcAmount]{

			"\t\t _____________________ \n",
			"\t\t|  _________________  |\n",
			"\t\t| |                 | |\n",
			"\t\t| |                 | |\n",
			"\t\t| |     WELCOME     | |\n", // 4
			"\t\t| |                 | |\n",
			"\t\t| |                 | |\n",
			"\t\t| |_________________| |\n",
			"\t\t|  		      |\n",					// <--- this took too long to set up.....
			"\t\t|		      |\n",
			"\t\t|  ___ ___ ___   ___  |\n",
			"\t\t| | 7 | 8 | 9 | | + | |\n",
			"\t\t| |___|___|___| |___| |\n",
			"\t\t| | 4 | 5 | 6 | | - | |\n",
			"\t\t| |___|___|___| |___| |\n",
			"\t\t| | 1 | 2 | 3 | | x | |\n",
			"\t\t| |___|___|___| |___| |\n",
			"\t\t| | . | 0 | = | | / | |\n",
			"\t\t| |___|___|___| |___| |\n",
			"\t\t|_____________________|\n",


		};

		

		for (int i{ 0 }; i < calcAmount; ++i) {

			if (i == 4 && !first) {

				std::cout << "\t\t| |     " << value << "       | |\n";

			}
			else { std::cout << ART[i]; }

		}


	}


	double mth(double x, double y, Ops op) {

		switch (op) {

		case plus:

			return x + y;
			break;
		case minus:

			return x - y;
			break;

		case times:
			return x * y;
			break;

		case divide:
			return x / y;
			break;

		case modulo:
			printOutOfOrder();
			return 1;
			//return x % y; expression must have integral data type <<------ BUG
			break;

		default:
			return 1; // 1 means bad exit
		}

	}

	double getInput() {
	
		static int times{ 0 };
		double x{};

		std::cout << "Input a value" << std::endl;
		std::cin >> x;
		if (std::cin.fail()) {	
			
			if (times >= 10) {
			
				std::cout << "WARNING! This error keeps happening in the 'getInput' function within the Calc namespace. You are being broken out of the function, expect possibile undetermined behaviour" << std::endl;
				return 0; //must return some value, this should also mitigate crashes
			}

			std::cin.clear();	//Basic cleanup that removes any remaining data in the cin buffer
			std::cin.ignore();
			std::cout << "\nERROR! Unexpected input. Asking for another input....\n\n";
			++times;
			return getInput();
		}
		else {
			
			//std::cout << "returning x"; <-- for debug
			return x;
		
		}
		
	}
	
	Ops getOp() {
	
		const Ops ops[]{plus,minus,times,divide,modulo};
		const int arrayLength{ sizeof(ops) / sizeof(ops[0]) };
		int choice{};
		const char strings[][128]{ //<- char array for writing basic strings. The strings should help the user navigate the software.
			
			"\nPlease enter one of the numbers seen below to perform a math operation\n",
			"1. Plus\n",
			"2. Minus\n",
			"3. Times\n",
			"4. Divide\n",
			"5. Modulo\n",

		}; 

		for (int i{}; i <= arrayLength; ++i) {
			std::cout << strings[i];
		
		}
		std::cin >> choice;
		if (std::cin.fail()) {

			std::cin.clear();	
			std::cin.ignore();
			std::cout << "\nERROR! Unexpected input. Asking for another input....\n\n";

		}
		else if(choice <=0 || choice >= arrayLength +1 ){

			std::cout << "NO";

			//std::cout << "returning x"; <-- for debug
			

		}
		else {
		
			return ops[choice - 1];
		}

		
		
	}

	void printOutOfOrder() {
		std::cout << "\n";
		for (int i{}; i < OUTOFORDER_L; ++i) {
			
			std::cout << OUTOFORDER[i] << std::endl;
		
		}
		
	
	}



}


