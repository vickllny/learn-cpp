//
// Created by vickllny on 2023/12/24.
// 返回类型后置

#include <iostream>
#include <list>
#include <string>

using namespace std;

template <typename T, typename U>
auto add(T t, U u) -> decltype(u + t){
    return t + u;
}

int main(){
    int x = 520;
    double y = 13.14;
    auto ret = add<int, double>(x , y);
    auto ret1 = add(x , y);//返回类型后置
    cout << "ret: " << ret << endl;
    return 0;
}