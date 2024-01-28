#include <iostream>
#include <Sales_data.h>

using namespace std;

// 2.6.3
// page 68
// 头文件

int main(){

    // 2.42
    Sales_data item1, item2;
    unsigned price;

    cin >> item1.bookNo >> item1.units_sold >> price;
    item1.revenue = price * item1.units_sold;
    cin >> item2.bookNo >> item2.units_sold >> price;
    item2.revenue = price * item2.units_sold;

    if(item1.bookNo == item2.bookNo){
        //TODO
    }

    return 0;
}