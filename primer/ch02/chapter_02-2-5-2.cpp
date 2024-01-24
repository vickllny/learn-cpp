#include <iostream>

using namespace std;

// 2.5.0 - 2.5.2
// page 60
// 处理类型


// 类型别名

// 使用typedef
typedef double wages; // wages是double的同义词
typedef wages base, *p; // base是double的同义词，p是double* 的同义词 

//使用using
using wagess = double;

//指针、常量和类型别名
typedef char *pstring; // 
const pstring cstr = 0; // cstr是指向char的常量指针 不等于 const char *cstr
const pstring *ps; // ps是一个指针，它的对象是指向char的常量指针

//auto类型说明符
//使用auto声明多个变量时，必须保持变量类型一致


int main(){

    int i = 0, &r = i;
    auto a = r;

    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr; //
    auto d = &i;
    auto e = &ci;

    const auto f = ci;
    auto &g = ci;
    // auto &h = 42;// error
    const auto &j = 42;

    // 2.33 2.34
    cout << "before a ===> " << a << endl;
    a = 42; // success
    cout << "after a ===> " << a << endl;
    cout << "before b ===> " << b << endl;
    b = 42; // success
    cout << "after b ===> " << b << endl;
    cout << "before c ===> " << c << endl;
    c = 42; // success
    cout << "after c ===> " << c << endl;
    // d = 42; // error d是常量指针
    // e = 42; // error e是常量指针
    // g = 42; // 常量引用不能更改

    // 2.35
    const int i = 42;
    auto j = i; 
    const auto &k = i; 
    auto *p = &i; 
    const auto j2 = i, &k2 = i;
    
    return 0;
}