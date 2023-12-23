//
// Created by vickllny on 2023/12/23.
//auto 1
//
#include "iostream"
#include "string"
using namespace std;

int main(){
    auto x = 3.14;

    auto y = 520;
    auto z = 'a';

//    auto nb;
//    auto double nb1;

    int temp = 110;
    auto* a = &temp;
    auto b = &temp;
    auto& c = temp;
    auto d = temp;
    cout << &temp << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    int tmp = 250;
    const auto a1 = tmp;
    auto a2 = a1;//const 丢失
    const auto& a3 = tmp;
    auto& a4 = a3;
    auto* pt4 = &a1;
}
