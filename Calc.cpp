#pragma once
#include "Calc.h"
#include <string>

namespace Calc {


	void visual(double value) {

		
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

		if (value != NULL) { hasValue = true; }
	
		for (int i{ 0 }; i < calcAmount; ++i) {
			
			if (i == 4 && hasValue) {

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
       return 1;
			//return x % y; expression must have integral data type <<------ BUG
			break;

		default:
			return 1; // 1 means bad exit
		}
	
	}


}


