#include <iostream>

using namespace std;

// 3.3.1 标准库类型vector
// page 86

// vector初始化时，编译器会尽量使用列表初始化初始vector
// 当编译器确认无法列表初始化时，会尝试使用默认值初始化vector对象

int main(){

    // 3.12
    vector<vector<int>> ivec; //正确，空的vector对象，在c++11中合法
    vector<string> svec = ivec; // 错误，类型不一致
    vector<string> svec(10, "null"); //正确,svec中有10个元素，每个元素初始值是 null字符串

    // 3.13
    vector<int> v1; // 0
    vector<int> v2(10); // 10,0
    vector<int> v3(10 ,42); // 10,42
    vector<int> v4{10}; // 1,10
    vector<int> v5{10, 42}; // 2, 10,42
    vector<string> v6{10}; // 10 空字符串
    vector<string> v7{10, "hi"}; // 10 hi

    return 0;
}