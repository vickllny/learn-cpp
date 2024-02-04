#include <iostream>

using namespace std;

// 3.4 迭代器
// page 95


int main(){
    
    string s("some string");
    if(s.begin() != s.end()){
        string::iterator it = s.begin();
        *it = toupper(*it);
    }
    cout << s << endl;

    for(auto it = s.begin(); it != s.end() && !isspace(*it); ++it){
        *it = toupper(*it);
    }
    cout << s << endl;

    auto cb_it = s.begin();
    auto ce_it = s.cend();

    vector<string> text{"this is a text string", "\n", "this is a text string"};
    for(auto it = text.begin(); it != text.end() && !it->empty(); ++it){
        for(auto s_it = it->begin(); s_it != it->end() && *s_it != '\0'; ++s_it){
            *s_it = toupper(*s_it);
        }
        cout << *it << endl;
        break;
    }
    // 使用了迭代器或者for循环向该vector中添加元素时，都会将该vector对象的迭代器失效

    // 3.21
    //miss

    // 3.22
    for(auto it = text.begin(); it != text.end() && !it->empty(); ++it){
        for(auto s_it = it->begin(); s_it != it->end() && *s_it != '\0'; ++s_it){
            *s_it = toupper(*s_it);
        }
        cout << *it << endl;
        break;
    }

    // 3.23
    vector<int> v323{1,2,3,4,5,6,7,8,9,10};
    for(auto it = v323.begin(); it != v323.end(); ++it){
        *it = 2 * *it;
    }

    for(auto it = v323.cbegin(); it != v323.cend(); ++it){
        cout << *it << endl;
    }

    return 0;
}