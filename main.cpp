#include "BFGS_Optimization.h"

#include <time.h>
#include <fstream>
#include <iostream>

int main( int argc, char *argv[] ){

    srand(611*time(NULL));

    double gradientCheck = 1e-6;

    double maxStepSize = 2.0;

    int meritFunctionIndex = 0;  // SET WHICH MERIT FUNCTION YOU WANT TO MINIMIZE

    BFGS_Optimization optimizer(gradientCheck,maxStepSize,meritFunctionIndex); //INITIALIZE THE MERIT FUNCTION

    optimizer.minimize();  //MINIMIZE THE MERIT FUNCTION

    return 0;

}
