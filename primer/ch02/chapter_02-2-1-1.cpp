#include <iostream>

using namespace std;

//2.1.1
//page 31

int main(){
    //2.1 
    //Q:类型 int、long、long long 和 short 的区别是什么？
    //A:int至少16bit,long 至少32bit,long long 至少64bit

    //Q:无符号类型和带符号类型的区别是什么？
    //A:无符号类型只能表示0和正数,带符号类型可表示负数、0和正数
    
    //Q:float 和 double 的区别是什么？
    //A:取值范围和精度不一样,计算效率也有差异

    //Q:计算按揭贷款时，对于利率、本金、和付款分别应该选择何种数据类型？请说明你的理由
    //A:利率可使用float，float可保证6位十进制是精确的，本金和付款应该使用double，double可保证10位十进制是精确的

    return 0;
}