#include <iostream>
#include <vector>

using namespace std;

// 3.5.4 C风格字符串
// page 109


int main(){

    // 3.37 下列的程序是何含义，程序的输出结果是什么？
    // A1: 第一行定义C风格字符串，第二行定义指针cp指向字符数组的第一个元素，while循环输出该指针指向的字符，并将指针向前移动
    // A2: 输出 h e l l o
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while(*cp){
        cout << *cp << endl;
        ++cp;
    }

    // 3.38 在本节中我们提到，将两个指针相加不但是非法的，而且也没有什么意义。请问为什么两个指针相加没有意义？
    // A: 同一数组的2个指针相减获得2个指针的距离，将一个数组指针加上一个整数表示向前/后移动单位距离。但是2个指针相加并没有逻辑上的意义，因此2个指针不能相加

    // 3.39 编写一段程序，比较两个 string 对象。再编写一段程序，比较两个C风格字符串的内容
    string s1("aaaaa"), s2("bbbbb");
    if(s1 == s2){
        cout << "s1 and s2 are equals." << endl;
    }else if(s1 < s2){
        cout << "s1 less than s2." << endl;
    }else {
        cout << "s1 greater than s2." << endl;
    }

    const char sc1[] = {'c', 'c', 'c'};
    const char sc2[] = {'d', 'd', 'd'};
    const char *scp1 = sc1, *scp2 = sc2;
    auto flag = strcmp(sc1, sc2);
    if(flag == 0){
        cout << "sc1 and sc2 are equals." << endl;
    }else if(flag == -1){
        cout << "sc1 less than sc2." << endl;
    }else {
        cout << "sc1 greater than sc2." << endl; 
    }

    // 3.40 编写一段程序，定义两个字符数组并用字符串字面值初始化它们；接着再定义一个字符数组存放前面两个数组连接后的结果。使用strcpy和strcat把前两个数组的内容拷贝到第三个数组当中。
    const char c1[] = "hello";
    const char c2[] = "world!";
    char c3[strlen(c1) + strlen(" ") + strlen(c2) + 1];
    strcpy(c3, c1);
    strcat(c3, " ");
    strcat(c3, c2);

    cout << c3 << endl;


    return 0;
}