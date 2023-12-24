//
// Created by vickllny on 2023/12/24.
// decltype 表达式是一个左值，或者被括号（）包围，使用decltype推导出的是表达式类型的引用（如果有const、volatile限定符不能忽略）
#include <iostream>
#include <string>
using namespace std;

class Test {
public:
    int num;
};

int main(){
    const Test obj{};
    //带有括号
    decltype(obj.num) a = 0;
    decltype((obj.num)) b= a;//const int &，因为Test对象实例被const修饰
    //加法
    int n = 0, m = 0;
    decltype(n + m) c = 0;
    decltype(n = n + m) d = n; //表达式是一个左值，是一个引用
    return 0;
}