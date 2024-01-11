#include <iostream>

using namespace std;

//2.1.2
//page 32

int main(){

    // unsigned char c = -1;
    // unsigned char c2 = -2;
    // signed char c3 = 256;
    // cout << c << endl;
    // cout << c2 << endl;
    // cout << c3 << endl;

    // cout << -1 % 256 << endl;

    // unsigned u = 10;//无符号
    // int i = -42;
    // unsigned i1 = i;
    // unsigned j = -42;

    // cout << i + i << endl;
    // cout << i + u << endl; // 2^32 - 42 + 10
    // cout << i1 << endl;
    // cout << j << endl;

    // unsigned u1 = 42, u2 = 10;
    // cout << "u1 - u2:" << u1 - u2 << endl;
    // cout << "u2 - u1:" << u2 - u1 << endl; //2^32 - 32

    //infinite loop => 死循环
    // for(unsigned uu = 10; uu >= 0; --uu){
    //     cout << uu << endl;
    // }

    unsigned uu = 11;
    while(uu > 0){
        --uu;
        cout << uu << endl;
    }

    //2.3
    
    unsigned u = 10, u2 = 42;
    cout << u2 - u << endl; //32
    cout << u - u2 << endl; //4294967296(2^32) - 32 = 4294967264

    int i = 10, i2 = 42;
    cout << i2 - i << endl;//32
    cout << i - i2 << endl;//-32
    cout << i - u << endl;//0
    cout << u - i << endl;//0

    //2.4
    //~~

    return 0;
}