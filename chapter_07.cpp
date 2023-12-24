//
// Created by vickllny on 2023/12/23.
//

#include <iostream>
#include <string>
using namespace std;

class Test {};

int func();
int& func_r();
int&& func_rr();

const int func_int();
const int& func_int_r();
const int&& func_int_rr();

int n = 100;

decltype(func()) a = 0;
decltype(func_r()) b = n;

void foo(int* p){
    cout << "p: " << p << endl;
    cout << "*p->: " << *p << endl;
}

int main(){
    int a = 100;
//    auto* b = &a;
//    foo(b);
    //左值引用
    int &c = a;
    c = 120;//通过左值引用修改内存的值
    
    cout << "a: " << a << endl;
    cout << "c: " << c << endl;

    int &var = a = 150;
    cout << "a: " << a << endl;
    cout << "var: " << var << endl;

    const int &v = 200;// const int temp = 200; const int &v = temp;

    //右值
    int &&vv = 200;
    cout << "vv: " << vv << endl;
    int *vvv = &vv;
    cout << "vv-addr: " << vvv << endl;
    vv = 250;
    cout << "vv: " << vv << endl;
    cout << "vv-addr: " << vvv << endl;

//    int &f = func();//error
//    左值：可以取地址，有名字，非临时就是左值
//    右值：不可以取地址，没有名字，临时就是右值
}