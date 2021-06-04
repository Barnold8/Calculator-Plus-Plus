#include <iostream>
#include "CalcLib.h"

                                                                                //Obviously this calculator isnt too robust with what you can do with it but its here to help me with remembering concepts and proper programming practices
char getChoice() {

    char choice{};

    std::cout << "\nWelcome to the calculator. Please pick an operation, write it after the '|' " << std::endl;
    std::cout << "\na. Addition\nb. Subtraction\nc. Division\nd. Multiplication\nf. Clear console\n\nWhat operation do you wish to choose?\t | "; //<< Possbily create an array with string objects that holds each of these for cleaner code. Just access like Questions[1] etc
    std::cin >> choice;

    return choice;

}


int main()
{
                                     //For the program, to choose what kind of operation, use a character, then it can be used with a switch statement. 

    char userChoice{'_'};


    while (userChoice != 'Z') {      //Z is reserved for end program. 
        
        userChoice = getChoice();

        switch (userChoice) {
            
        case 'a':
        
            MainFour(0);

            break;

        case 'b':

            MainFour(1);

            break;

        case 'c':

            MainFour(2);

            break;

        case 'd':

            MainFour(3);

            break;

        case 'f':

            system("cls");

            break;

        }

    }
    
  
}
