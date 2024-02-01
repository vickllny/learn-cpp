#include <iostream>

using namespace std;

// 3.3.2 向vector对象中添加元素
// page 90


int main(){

    // 3.14
    vector<int> v314;
    int temp;
    while(cin >> temp){
        v314.push_back(temp);
    }

    for(auto i : v314){
        cout << i << endl;
    }

    // 3.15
    vector<string> s315;
    string s_temp;
    while(cin >> s_temp){
        s315.push_back(s_temp);
    }
    

    return 0;
}