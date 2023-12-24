#include <iostream>
#include <string>
#include <map>

using namespace std;

//typedef
template <typename T>
struct MyMap{
    typedef map<int, T> mapType;
};
//using
template <typename T>
using MMap = map<int, T>;

template <typename T>
class Container {
    public:
        void print(T &t)
        {
            auto it = t.begin();
            for(; it != t.end(); ++it){
                cout << it->first << ", " << it->second << endl;
            }
        }
};

int main(){


    MyMap<int>::mapType mm1;
    mm1.insert(make_pair(1, 1));

    Container<MyMap<int>::mapType> c;
    c.print(mm1);

    MyMap<double>::mapType mm2;
    mm2.insert(make_pair(1, 1.1));

    MyMap<string>::mapType mm3;
    mm3.insert(make_pair(1, "aaa"));

    MMap<int> mmp1;
    mmp1.insert(make_pair(100, 1000));
    c.print(mmp1);

    return 0;
}