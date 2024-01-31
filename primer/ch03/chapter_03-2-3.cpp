#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

// 3.2.3 处理string对象中的字符
// page 81

int main(){

    // 3.6
    string s36("hello world!");
    for(auto &c : s36){
        c = 'X';
    }
    cout << "s36: replaced string is => " << s36 << endl;

    // 3.7
    // 不会变化
    string s37("hello world!");
    for(char &c : s37){
        c = 'X';
    }
    cout << "s37: replaced string is => " << s37 << endl;

    // 3.8
    string s38("hello world !!! 3.8");
    decltype(s38.size()) index = 0;
    while(index != s38.size()){
        s38[index] = 'X';
        ++index;
    }
    string s381("hello world !!! 3.8");
    for(int i = 0; i != s381.size(); ++i){
        s38[i] = 'X';
    }

    // 3.9
    // 不合法，用下标访问空字符时非法的行为
    string s;
    cout << s[0] << endl;

    // 3.10 去除标点符号
    // 使用ispunct方法判断该字符是否是标点符号
    string s310("this a string which contains punctuation.!@#$%^&*()");
    string s3101;
    for(auto c : s310){
        if(!ispunct(c)){
            s3101 += c;
        }
    }
    cout << "the string which not contains punct is: " << s3101 << endl;

    // 3.11
    // 如果循环体尝试更新c就非法。否则合法. c的类型是 const c
    const string s311 = "Keep out!";
    for(auto &c : s311) { 
    // for(const char &c : s311) { 
        /****/ 
    }
    cout << s << endl;

    return 0;
}