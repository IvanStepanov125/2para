#include <iostream>
#include <cstdint>

using namespace std;

class Fractin{
private:
    int32_t _num;
    uint32_t _denom;
public:
    Fractin(); //Конструктор по умолчанию
    Fractin(int32_t num, uint32_t denom); //Конструктор с параметрами


    Fractin(const Fractin& fractin);



    void SetNum(int32_t newNum);
    void SetDenom(int32_t newDenom);

    inline int32_t GetNum(){
        return _num;
    }
    inline int32_t GetDenom(){
        return _denom;
    }

    bool IsVaid = false;
    void Print();
    inline void doubleprint(){
        cout << static_cast<double>(_num) / _denom << endl;
    }

    friend ostream& operator <<(ostream& os, const Fractin& tmp){
        os <<tmp._num << "/" << tmp._denom << endl;
        return os;
    }


};