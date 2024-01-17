#include <iostream>

using namespace std;

//2.3.3
//page 51
//理解复合类型的声明


int main(){

    // 指向指针的引用
    // int i = 42;
    // int *p;
    // int *&r = p; // r是指向指针的引用
    // r = &i; // 对i取地址赋值给指针引用r => 将指针p指向对象i
    // cout << *p << endl;
    // *r = 0; // 解引用得到对象i，将对象i的值赋值为0
    // cout << *p << endl;

    // 2.25
    int* ip, i, &r = i; // int型指针、int型对象、int型引用
    int i, *ip = 0; // int型对象、无效指针
    int* ip, ip2; // int型指针ip、int型对象
    return 0;
}