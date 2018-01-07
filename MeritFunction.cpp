#include "MeritFunction.h"
#include "BFGS_Optimization.h"


void MeritFunction::setMeritFunction(int meritFunctionIndex){

    MFI = meritFunctionIndex;

    if(MFI == 0) funcDimension = 2;

    else if(MFI == 1) funcDimension = 3;

    return;

}



double MeritFunction::f(Eigen::VectorXd& position){

    if(MFI == 0){

        double gradientCheck = 1e-6;

        double maxStepSize = 2.0;

        int meritFunctionIndex = 1;

        BFGS_Optimization optimizer(gradientCheck,maxStepSize,meritFunctionIndex);

        optimizer.minimize();

        return std::pow(position(0) * position(1) - 3,2) + 1.0;

    }

    else if(MFI == 1) return std::pow(position(0) - 3.5,4) + std::pow(position(1),2) + std::pow(position(2),2);

}


void MeritFunction::printReport(Eigen::VectorXd& position){


    if(MFI == 0){
        std::cout << "OPTIMIZATION RESULT: " << std::endl;
        std::cout << std::pow(position(0) * position(1) - 3,2) + 1.0 << std::endl << std::endl;
        std::cout << position.transpose() << std::endl << std::endl;
    }

    else if(MFI == 1){

        //std::cout << "OPTIMIZATION RESULT: " << std::endl;
        //std::cout << std::pow(position(0) - 3.5,4) + std::pow(position(1),2) + std::pow(position(2),2) << std::endl << std::endl;
        //std::cout << position.transpose() << std::endl << std::endl;
    }

    return;

}



Eigen::VectorXd MeritFunction::setInitialPosition(){

    Eigen::VectorXd position = Eigen::VectorXd::Random(funcDimension);

    return position;

}


MeritFunction::MeritFunction(){



}
