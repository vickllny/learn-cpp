#include <iostream>

using namespace std;

// 3.3.3 其他vector操作
// page 91


int main(){

    // 3.16
    vector<int> v1; // 0
    vector<int> v2(10); // 10,0
    vector<int> v3(10 ,42); // 10,42
    vector<int> v4{10}; // 1,10
    vector<int> v5{10, 42}; // 2, 10,42
    vector<string> v6{10}; // 10 空字符串
    vector<string> v7{10, "hi"}; // 10 hi
    cout << "v1.size => " << v1.size() << endl;
    cout << "v2.size => " << v2.size() << endl;
    cout << "v3.size => " << v3.size() << endl;
    cout << "v4.size => " << v4.size() << endl;
    cout << "v5.size => " << v5.size() << endl;
    cout << "v6.size => " << v6.size() << endl;
    cout << "v7.size => " << v7.size() << endl;
    for(auto val : v1){
        cout << "v1.element => " << val << endl;
    }
    for(auto val : v2){
        cout << "v3.element => " << val << endl;
    }
    for(auto val : v3){
        cout << "v3.element => " << val << endl;
    }
    for(auto val : v4){
        cout << "v4.element => " << val << endl;
    }
    for(auto val : v5){
        cout << "v5.element => " << val << endl;
    }
    for(auto val : v6){
        cout << "v6.element => " << val << endl;
    }
    for(auto val : v7){
        cout << "v7.element => " << val << endl;
    }

    // 3.17
    // vector<string> v317;
    // string temp_string;
    // while(cin >> temp_string){
    //     v317.push_back(temp_string);
    // }
    // for(auto &str : v317){
    //     for(auto &c : str){
    //         // 定义在cctype中的函数参数类型是char，不是string
    //         c = toupper(c);
    //     }
    //     cout << str << endl;
    // }

    // 3.18
    // 不合法，给定一个元素初始化
    vector<int> ivec(1);
    ivec[0] = 42;
    cout << ivec[0] << endl;

    // 3.19
    vector<int> v3191(10, 42); //最好
    vector<int> v3192{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v3193 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

    // 3.20
    vector<int> v320;
    int temp_int;
    while(cin >> temp_int){
        v320.push_back(temp_int);
    }

    decltype(v320.size()) size = v320.size();
    if(size > 1){
        // for(int i = 0; i < size; ++i){
        for(int i = 0; i < size/2; ++i){
            // 3.20 - a
            // cout << v320[i] + v320[i+1] << endl;
            // if(i == size - 2){
            //     break;
            // }
            // 3.20 - b
            cout << v320[i] + v320[size - 1 - i] << endl;
            // if(i == size - 1 - i){
            //     break;
            // }
        }
    }else {
        cout << "元素个数至少为2，当前个数: " << size << endl;
    }
    

    return 0;
}