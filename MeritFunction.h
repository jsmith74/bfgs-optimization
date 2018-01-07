#ifndef MERITFUNCTION_H_INCLUDED
#define MERITFUNCTION_H_INCLUDED

#include <Eigen/Dense>
#include <iostream>


class MeritFunction{

    public:

        MeritFunction();
        void setMeritFunction(int meritFunctionIndex);
        double f(Eigen::VectorXd& position);
        int funcDimension;
        void printReport(Eigen::VectorXd& position);
        Eigen::VectorXd setInitialPosition();
        int MFI;

    private:

};

#endif // MERITFUNCTION_H_INCLUDED
