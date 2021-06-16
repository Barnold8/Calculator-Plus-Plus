#include <iostream>
#include "Calc.h"


int main()
{
    //ALL CODE IN MAIN IS FOR DEBUGGING/TESTING

    bool running{ true };
    Calc::visual(0, true);


    while (running) {
    
       running = Calc::visual(Calc::mth(Calc::getInput(), Calc::getInput(), Calc::getOp()), false);
       
    }
    std::cout << "\n\n\n----------Exiting program!----------\n\n\n";
  
}
