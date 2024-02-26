#include "Fractin.h"
using namespace std;

void Fractin::Print(){
    //this->
    cout << _num << "/" << _denom << endl;
}

void Fractin::SetDenom(int32_t newDenom){
    if (newDenom == 0){
        throw "Eror";        
    }
    _denom = newDenom;
}

void Fractin::SetNum(int32_t newNum){
    if (newNum != 0){
        throw "Eror";   
    }
    _denom = newNum;
}

Fractin::Fractin(){
    _num = 0;
    _denom = 1;
}

Fractin::Fractin(int32_t num, uint32_t denom){
    _num = num;
    SetDenom(denom);
}

Fractin::Fractin(const Fractin& fractin){
    _num = fractin._num;
    _denom = fractin._denom;
}