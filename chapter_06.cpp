//
// Created by vickllny on 2023/12/23.
// decltype 1
// https://www.bilibili.com/video/BV1bX4y1G7ks?p=8&spm_id_from=pageDriver&vd_source=240260c8cdca141b2447105a672fe65e
// 01:56
//

#include <iostream>
#include <string>

using namespace std;

int func1(){
    int a = 10;
    decltype(a) b = 10;
    decltype(a + 3.14) c = 3.14;
    decltype(a + b * 3.14) d = 3.14;
}

class Test {
public:
    string text;
    static const int value = 100;
};

int main(){
    int x = 88;
    const int &y = x;
    const int *z = &x;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
    decltype(x) a = x;
    decltype(y) b = x;
    decltype(x) c = y;

    decltype(Test::value) q = 100;

    Test t;
    decltype(t.text) w = "20";
}

