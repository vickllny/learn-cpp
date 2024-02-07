#include <iostream>

using namespace std;

// 3.5 数组
// page 101


int txt_size(){
    return 20;
}

string sa[10]; //空字符
int ia328[10]; //0

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int (*p_arr)[10] = &arr;
    int (&r_arr)[10] = arr;

    int *p_array[10];

    int *(&pr_arr)[10]= p_array;

    // 3.27
    unsigned buf_size = 1024;
    int ia[buf_size]; //非法，buf_size没有使用const修饰
    int ia1[ 4 * 7 - 14];// 合法，可以计算出的字面量常量
    int ia2[txt_size()];//非法
    char st[11] = "fundamental";//非法，长度应该定义为12，字符串最后有一个空白字符 '\0'

    // 3.28
    string sa2[10];//空字符，string上std标准库中的，不是内置类型
    int ia328_2[10];//未定义
    
    // 3.29 数组相对于vector的特点
    1.不能将数组拷贝、赋值给另一个数组
    2.没有vector灵活，数组大小被初始化，就不能随意的添加元素
    3.数组大小确定，不能更改

    cout << "okkkk" << endl;

    return 0;
}