#include <iostream>
#include <vector>

using namespace std;

// 3.5.3 指针和数组
// page 105

bool compare(int* const pb1, int* const pe1, int* const pb2, int* const pe2){
    if((pe1 - pb1) != (pe2 - pb2)){
        return false;
    }else {
        for(int *p1 = pb1, *p2 = pb2; (p1 != pe1) && (p2 != pe2); ++p1, ++p2){
            if(*p1 != *p2){
                return false;
            }
        }
    }
    return true;
}

int main(){

    string nums[] = {"one", "two", "three"};
    // string *p = &nums[0];
    // //等价于
    string *p2 = nums;

    int ia[] = {0,1,2,3,4,5,6,7,8,9,10};
    // auto ia2(ia); //等价于 auto ia2(&ia[0]) ia2是一个指针，指向数组ia的第一个元素
    // // ia2 = 42; //编译错误，ia2是一个指针，不能直接将42赋值给ia2

    // decltype(ia) ia3 = {1,2,3,4,5,6,7}; //ia3是一个数组

    // //指针也是迭代器
    // ++p; //等价于p = &nums[1]
    // // 使用指针遍历数组ia的元素
    // int *e = &ia[11];
    // for(int *b = ia; b != e; ++b){
    //     cout << *b << endl;
    // }

    // 3.34 假定p1和p2指向同一个数组中的元素，则下面的程序实现的功能是什么？什么情况下该程序是非法的
    // a1: p1和p2指向同一个对象
    // a2: 任何时候该程序都合法
    // p1 += p2 - p1; 

    // 3.35 编写一段程序，利用指针将数组中的元素置为0
    int *e = end(ia);
    for(int *beg = begin(ia); beg != e; ++beg){
        *beg = 0;
    }
    for(int i=0; i < 11; ++i){
        ia[i] = 0;
    }

    // 3.36 编写一段程序，比较2个数组是否相等。再写一段程序，比较2个vector是否相等。
    int aa1[] = {1, 2, 3, 4};
    int aa2[] = {1, 2, 3, 5};
    if(compare(begin(aa1), end(aa1), begin(aa2), end(aa2))){
        cout << "array are equals." << endl;
    }else {
        cout << "array are not equals." << endl;
    }

    vector<int> v1 = {1,2,3,4};
    vector<int> v2 = {1,2,3,5};
    if(v1 == v2){
        cout << "vector are equals." << endl;
    }else {
        cout << "vector are not equals." << endl;
    }


    return 0;
}