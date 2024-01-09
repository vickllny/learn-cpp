#include <iostream>
#include <map>
#include "Sales_item.h"

using namespace std;

//1.5.2
//page 21

int main(){
    //1.23
    // map<string, int> map;
    // Sales_item item;
    // while(cin >> item){
    //     auto it = map.find(item.isbn());
    //     if(it == map.end()){
    //         map.insert(pair<string, int>(item.isbn(), item.sold()));
    //     }else {
    //         it->second = it->second + item.sold();
    //     }
    // }

    // for(auto it = map.begin(); it != map.end(); it++){
    //     cout << "isbn => " << it->first << " , count => " << it->second << endl;
    // }

    //1.24 1.25
    Sales_item total;
    if(cin >> total){
        Sales_item temp;
        while(cin >> temp){
            if(total.isbn() == temp.isbn()){
                total += temp;
            }else {
                cout << total << endl;
                total = temp;
            }
        }
        cout << total << endl;//打印最后一本书
    }else {
        cerr << "No data!?" << endl;
        return -1;
    }


    return 0;
}