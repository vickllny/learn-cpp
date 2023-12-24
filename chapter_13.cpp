#include <iostream>
#include <string>

using namespace std;

//函数指针
int mytest(int a, string b)
{
    cout << "a: " << a << ",b: " << b <<endl;
    return 0;
}

typedef int(*func)(int, string);//typedef
using func1 = int(*)(int, string);//using
              //返回值 第一个参数类型，第二个参数类型

int main(){
    using i = int;
    i val = 20;
    cout << "val: " << val << endl;

    func f = mytest;
    func1 f1 = mytest;

    cout << "f: " << *f <<endl;
    cout << "f1: " << *f1 <<endl;
    f(10, "123");
    f1(100, "1234");
    (*f1)(110, "abc");//解引用
    return 0;
}