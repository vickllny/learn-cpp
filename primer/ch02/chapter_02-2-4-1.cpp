#include <iostream>

using namespace std;

//2.4.1-2.4.2
//page 54
// const 的引用


int main(){

    const int c1 = 100;
    const int c2 = 100;
    const int &c = c1 * 30;

    double dval = 3.14;
    const int &ri = dval; // const int temp = dval; const int &ri = temp;

    //对const的引用可能引用一个并非const的对象
    int i = 42;
    int &r = i;
    const int &r1 = i;
    r = 50; // 可通过非const引用改变它的值
    r1 = 20;// error

    const double pi = 3.14;
    double *ptr = &pi; // error，指针也必须是const修饰
    const double *cptr = &pi; // success，成功
    &cptr = 42; // 不能赋值

    double pi1 = 3.14111;
    cptr = &pi1; // success
    cout << *cptr << endl;

    //const指针
    int errNumb = 0;
    int *const curErr = &errNumb; // curErr将一直指向errNumb
    //修改errNumb的值
    *curErr = 20; // success
    const double pi = 3.1415926;
    const double *const pi_ptr = &pi;
    pi_ptr = &pi1; // error

    // 2.27
    int i = -1, &r = 0; // 非法，非常量r不能是字面值必须是对象
    int i = -1, &r = i;
    const int i2 = i;
    int *const p2 = &i2; // 合法
    const int *const p2 = &i2; // 合法
    const int i = -1, &r = 0; // 合法，常量引用可以是字面量
    const int *const p3 = &i2; // 合法 指针也是常量
    const int *p1 = &i2; // 合法，虽然指针非常量
    const int &const r2 = i2; // 不合法，常量引用需初始化
    const int i2 = i, &r = i; // 合法，常量引用常量和非常量对象

    // 2.28
    int i, *const cp;// 不合法，常量指针cp需初始化
    int *const cp = &i;
    int *p1, *const p2;// 不合法，常量指针p2需初始化
    int *p1, *const p2 = &i;
    const int ic, &r = ic; // 不合法，常量对象必须初始化
    const int ic = 20, &r = ic; 
    const int *const p3 = &ic;// 不合法，常量指针必须初始化
    const int *const p3 = &ic;
    const int *p; // 合法，指针非常量，可以不用初始化

    // 2.29
    int i = -1;
    const int ic = 2220, &r = ic;
    const int i2 = i;
    const int *p1 = &i2;
    const int *const p3 = &ic;
    int i3 = 111;
    int *const p2 = &i3;
    i = ic; // 合法，常量赋值给普通对象
    p1 = p3; // 合法
    p1 = &ic; // 合法
    p3 = &ic; // 不合法，常量指针不能重新赋值
    p2 = p1; // 不合法，p1是普通指针，p2是常量指针
    ic = *p3; // 不合法，ic是常量，值不允许修改

    cout << *p1 << endl;

    return 0;
}