#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

// 字符串
// page 75

int main(){
    //定义和初始化
    string s1; // 默认初始化，s1是一个空字符串
    string s2 = s1; // s2是s1的副本 => 拷贝初始化
    string s3 = "hiya"; // s3是该字符串字面值的副本 => 拷贝初始化
    string s4(10, 'c');// s4的内容是cccccccccc

    // 使用等(=)初始化一个变量，是拷贝初始化；如果不使用等号，则执行的是直接初始化

    string s5 = "1" + "2"; // 不合法，不能使用字面值字符串直接相加
    string s6 = s1 + " , " + "world"; // 合法 string s6 = (s1 + ", ") + world 其中(s1 + ", ")的结果是一个string对象
    string s7 = "hello" + ", " + s2; // 不合法 同s6一样 s7 = ("hello" + ", ") + s2 其中("hello" + ",")是2个字符串字面值相加

    // 在c++中，字符串字面值和string是不同的类型

    // 3.2
    string s32;
    while(cin >> s32){
        cout << s32 << endl;
    }

    // 3.3
    // string的输入运算符读取输入流时会过滤掉空字符，从非空白开始读取，直到下一空白为止
    // getline按行读取(直到遇到换行符)，不会过滤掉空白符，但是输入到string对象时，会过滤掉字符的前后空白


    // 3.4
    string s341,s342;
    if(cin >> s341 >> s342){
        if(s341 == s342){
            cout << "string equals. the value is " << s341;
        }else {
            if(s341.size() >= s342.size()){
                cout << s341 << endl;
            }else {
                cout << s342 << endl;
            }
        }
        // re
        if(s341.size() == s342.size()){
            cout << "two string object size equals." << endl;
        }else if(s341.size() >= s342.size()){
            cout << s341 << endl;
        }else {
            cout << s342 << endl;
        }
    }

    // 3.5
    string s351,s352;
    while(cin >> s352){
        s351 = s351 + s352 + " ";
    }
    cout << "the biggest string is " << s351 << endl;

    //TODO 3.2.3 page => 81

    return 0;
}