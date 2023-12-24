//
// Created by vickllny on 2023/12/24.
// https://www.bilibili.com/video/BV1bX4y1G7ks?p=15
// 模板的优化
//

#include <iostream>
#include <list>
#include <string>
#include <map>

using namespace std;

template <typename T>
class Container
{
private:
    /* data */
public:
    void print(T& t){
        auto it = t.begin();
        for (; it != t.end(); ++it)
        {
            /* code */
            cout << it->first << "," << it->second << endl;
        }
        
    }
};

template <typename T=int>
void func(T t)
{
    cout << "current value:" << t << endl;
}

template <typename T = long, typename U = int>
void mytest(T t='A',U u='B')
{
    cout << "t: " << t << ",u: " << u << endl;
}

int main(){
    map<int, string> m;
    m.insert(make_pair(1, "alice"));
    m.insert(make_pair(2, "peter"));
    m.insert(make_pair(3, "nancy"));
    Container<map<int, string> > c;
    c.print(m);
    cout << "chapter_12" << endl;
    func(200);
    mytest(20, 35);
    mytest<int>('a','v');
    mytest<char>('a',"v");
    mytest<int, char>('a', 'v');
    return 0;
}