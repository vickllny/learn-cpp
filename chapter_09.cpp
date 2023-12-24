//
// Created by vickllny on 2023/12/24.
// decltype 应用于范型编程
//
#include <iostream>
#include <list>
#include <string>
using namespace std;

template <typename T>
class Container {
public:
    void func(T& c){
        for(m_it = c.begin(); m_it != c.end(); ++m_it){
            cout << *m_it << " ";
        }
        cout << endl;
    }
private:
    decltype(T().begin()) m_it;//范型迭代器 decltype(T().begin())
};

int main(){
    list<int> ls {1,2,3,4,5,6,7};
    const list<int> ls1 {1,2,3,4,5,6,7};
    Container<list<int>> c;
    Container<const list<int>> c1;
    c.func(ls);
    cout << endl;
    c1.func(ls1);
    return 0;
}