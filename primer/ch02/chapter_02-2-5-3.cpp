#include <iostream>

using namespace std;

// 2.5.3
// page 62
// decltype类型指示符

int main(){
    
    // int i = 42, *p = &i, &r = i;
    // decltype(r + 0) b;
    // decltype(*p) c; // *p 表示解引用，即*p表示一个引用，而引用必须初始化
    // decltype(p) c1;

    // decltype的表达式如果加上了括号了的变量，则该结果将是引用，比如decltype((i))，2层括号时，一定是引用
    // decltype((i)) d; //加了括号是引用，必须初始化
    // decltype(i) e; //整形


    // 2.36
    int a = 3, b = 4;
    decltype(a) c = a; //c => 3
    decltype((b)) d = a; // a => 3
    ++c; // c => 3
    ++d; // a => 4, d => 4
    // result a=4,b=4,c=4,d=4
    cout << " a=> " << a << endl;
    cout << " b=> " << b << endl;
    cout << " c=> " << c << endl;
    cout << " d=> " << d << endl;

    // 2.37
    decltype(a) c1 = a; // c1 => int, 4
    decltype(a = b) d1 = a; // d => int&, 4
    cout << " c1=> " << c1 << endl;
    cout << " d1=> " << d1 << endl;

    // 2.38
    // decltype 处理顶层const和引用的方式与 auto不同，decltype会将顶层const和引用保留起来，而auto会丢失顶层const和引用
    decltype(a) c11 = a;
    auto c22 = a;

    decltype((a)) c33 = a;
    auto c44 = a;

    return 0;
}