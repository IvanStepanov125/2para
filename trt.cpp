#include <iostream>
#include "Fractin.h"

using namespace std;

int main(){

    Fractin fract = Fractin(1, 2);
    cout << fract;
    Fractin frac_copy = Fractin(fract);
    cout << frac_copy;


    Fractin fract1;
    fract1.SetNum(1);
    fract1.SetDenom(0);
    fract1.doubleprint();
    Fractin fract3 = Fractin();

    Fractin* tract_pointer = new Fractin();

    return 0;
}