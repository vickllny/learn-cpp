#include <iostream>
#include "Sales_item.h"

using namespace std;

//1.5.1
//page 20

int main(){
    //1.20
    // Sales_item item;
    // while(cin >> item){
    //     cout << item << endl;
    // }

    //1.21
    // Sales_item item, item1;
    // cout << "Please type two same ISBN data" << endl;
    // cin >> item >> item1;
    // if(item.isbn() == item1.isbn()){
    //     cout << item + item1 << endl;
    // }else {
    //     cerr << "Data must refer to same ISBN" << endl;
    // }

    //1.22
    Sales_item item, item1;
    if(cin >> item){
        while(cin >> item1){
            item += item1;
        }
        cout << item << endl;
    }
    return 0;
}