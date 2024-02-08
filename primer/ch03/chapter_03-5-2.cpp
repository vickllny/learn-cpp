#include <iostream>

using namespace std;

// 3.5.2 访问数组元素
// page 103


int main(){

    // 3.30
    constexpr size_t array_size = 10;
    int ia[array_size];
    for(size_t ix = 1; ix <= array_size; ++ix){ //ix <= array_size 数据越界；ix的初始值应该是0
        ia[ix] = ix;
    }

    // 3.31
    for(size_t ix = 0; ix < array_size; ++ix){ 
        ia[ix] = ix;
    }

    // 3.32
    int ia1[array_size];
    for(size_t ix = 0; ix < array_size; ++ix){ 
        ia1[ix] = ia[ix];
    }
    vector<int> iv;
    for(size_t ix = 0; ix < array_size; ++ix){ 
        iv.push_back(ix);
    }
    vector<int> iv1 = iv;

    // 3.33
    // 如果scores未初始化，则数组的元素是未定义的，使用++运算符将出现错误


    return 0;
}