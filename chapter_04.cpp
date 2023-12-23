//
// Created by vickllny on 2023/12/23.
// auto 2
//
#include "iostream"
#include "string"
using namespace std;

int func(auto a1, auto a2){}

class Test {
    auto v1 = 0;
    static auto v2 = 0;
    static const auto v3 = 0;
};

int func1(){
    int array[] = {1,2,3,4,5};
    auto t1 = array;
    auto t2[] = array;
    auto t3[] = {1,2,3,4,5};
}

template <typename T>
struct Test1{};

int func2(){
    Test1<double> t;
    Test1<auto> t1 = t;
    return 0;
}