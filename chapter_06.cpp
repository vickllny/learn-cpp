//
// Created by vickllny on 2023/12/23.
// decltype 1
//

#include <iostream>

using namespace std;

int func1(){
    int a = 10;
    decltype(a) b = 10;
    decltype(a+3.14) c = 3.14;
    decltype(a + b * 3.14) d = 3.14;
}

int main(){
    int x = 88;
    const int &y = x;
    const int *z = &x;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
    decltype(x) a = x;
    decltype(y) b = x;
    decltype(x) c = y;

}

