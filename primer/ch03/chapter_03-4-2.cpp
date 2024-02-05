#include <iostream>

using namespace std;

// 3.4.1 迭代器运算
// page 99


int main(){
    //迭代器运算
    //迭代器向前移动 指取下一个元素
    vector<string> v {"1", "2", "3"};
    auto it_1 = v.begin();
    auto it_2 = it_1 + 1;
    cout << (it_1 < it_2) << endl;
    cout << (it_1 - it_2) << endl;
    cout << *it_1 << endl;
    cout << *it_2 << endl;

    //迭代器的算术运算
    //二分搜索
    int sought = 10;
    vector<int> list {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,17,18};
    auto begin = list.begin(), end = list.end();
    auto mid = begin + (end - begin)/2;
    while (mid != end && *mid != sought){
        if(sought < *mid){
            end = mid;
        }else {
            begin = mid + 1; 
        }
        mid = begin + (end - begin)/2;
    }

    // 3.24
    vector<int> v324;
    int temp_int;
    while(cin >> temp_int){
        v324.push_back(temp_int);
    }
    //每对相邻整数的和输出
    decltype(v324.size()) size = v324.size();
    if(size < 2){
        cout << "the numbers of element less than 2" << endl;
    }else {
        auto it = v324.begin(), it_n = it;
        while ((it_n = it + 1) != v324.end())
        {
            cout << *it + *it_n << endl;
            it++;
        }
        
    }
    //第一个和倒数第一个，接着第二个和倒数第二个，以此类推
    if(size < 2){
        cout << "the numbers of element less than 2" << endl;
    }else {
        auto it = v324.begin(), it_n = v324.end() - 1;
        while (it < it_n)
        {
            cout << *it + *it_n << endl;
            it++;
            it_n--;
        }
        
    }
    

    cout << 95/10 << endl;
    // 3.25
    vector<int> scores(11, 0);
    unsigned grade;
    while(cin >> grade){
        if(grade <= 100){
            ++*(scores.begin() + grade / 10);
        }
    }
    for(auto s : scores){
        cout << s << " ";
    }
    cout << endl;

    // 3.26
    // 1.第二种方法会出现溢出的情况，而第一种可以防止这种问题
    // 2.两个迭代器之间只有"-"操作符，没有"+"操作符，但是迭代器和int之间可以使用"+"

    return 0;
}