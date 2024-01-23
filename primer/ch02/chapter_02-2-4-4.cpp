#include <iostream>

using namespace std;

// 2.4.4
// page 58
// constexpr和常量表达式

// 方法使用constexpr修饰
constexpr int size(){
    return 100;
}

//函数体内定义的变量无固定地址，无法正常对该变量取地址操作，所以i和j必须在函数体之外
int j = 0;
constexpr int i = 42;

int main(){

    // constexpr 变量
    constexpr int mf = 20;
    constexpr int limit = mf + 1;
    constexpr int sz = size();

    // 字面值类型

    // 指针和constexpr
    // 在constexpr声明中定义了一个指针，限定符constexpr仅对指针有效，与指针所指的对象无关
    const int *p = nullptr;
    constexpr int *q = nullptr;
    // constexpr指针既可以指向常量也可以指向一个非常量
    constexpr int *np = nullptr;

    // i和j都必须在函数体之外
    constexpr const int  *p = &i;
    constexpr int *p1 = &j;

    // 2.32
    int null = 0, *p = null; // => int null = 0, *p = &null;
    

    return 0;
}