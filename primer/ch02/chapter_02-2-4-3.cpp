#include <iostream>

using namespace std;

//2.4.3
//page 57
// 顶层const

// const 先看const左边，如果左边没有值，则作用于右边

int main(){
    // 不可变的指针、算术类型、类 顶层const
    // 可变的或者声明引用的const是底层const

    // int a = 2;
    // int b = 2;
    // const int const * const p = &a;
    // p = &b;
    // const int c = 22;
    // const int &c1 = c;
    // int &c2 = c;
    // int d = 255;
    // const int &d1 = d;

    // 2.30
    const int v2 = 0; // 顶层,  字面量？
    int v1 = v2; // 底层
    int *p1 = &v1, &r1 = v1; // p1底层 r1底层
    const int *p2 = &v2, *const p3 = &i, &r2 = v2; // p2底层  p3既是底层又是顶层  r2底层

    // 2.31
    r1 = v2; //合法
    p1 = p2; //不合法
    p2 = p1; //合法
    p1 = p3; //不合法
    p2 = p3; //合法

    return 0;
}