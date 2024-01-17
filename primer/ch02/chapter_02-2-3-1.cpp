#include <iostream>

using namespace std;

//2.3.1
//page 45
//引用

int reuse = 42;

int main(){
    // example
    // int ival = 1024;
    // int iival = ival;
    // cout << "iival => " << iival << endl;
    // int &refVal = ival;
    // int &refVal1 = iival;
    // refVal = 2;
    // iival = 3;
    // int ii = refVal;
    // ii = 33;
    // cout << "ii => " << ii << endl;
    // cout << "refVal => " << refVal << endl;
    // cout << "ival => " << ival << endl;
    
    // cout << "iival => " << iival << endl;

    // int &refVal4 = 10;//error 引用必须绑定对象，不能与字面值或者表达式计算的结果绑定在一起

    // 2.15
    // int ival = 1.01; //correct
    // int &rval1 = 1.01; // incorrect 不能是字面值必须是对象
    // int &rval2 = ival;// correct
    // int &rval3;// incorrect 不正确，必须初始化

    // 2.16
    // int i = 0, &r1 = i;
    // double d = 0, &r2 = d;

    // r2 = 3.14159;// correct 
    // cout << r2 << endl;
    // r2 = r1; // correct int => double
    // cout << r2 << endl;
    // i = r2; // correct 丢失部分值
    // r1 = d; // correct 丢失部分值

    // 2.17
    // int i, &ri = i;
    // i = 5;
    // ri = 10;
    // cout << i << " " << ri << endl; // 10 10
    return 0;
}