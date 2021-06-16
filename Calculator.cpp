#include <iostream>
#include "Calc.h"






int main()
{
    //ALL CODE IN MAIN IS FOR DEBUGGING/TESTING

    bool running{ true };
    Calc::visual(0, true);


    while (running) {
    
        std::cout << Calc::mth(Calc::getInput(),Calc::getInput(),Calc::getOp());
        
        running = false;
    
    }
    
  
}
