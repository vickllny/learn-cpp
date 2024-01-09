#include <iostream>

using namespace std;

//practice 1.4.5
//page 15

int main(){
    //1.17 1.18
    int currentVal = 0, val = 0;
    cout << "Please type some numbers." << endl;
    if(cin >> currentVal){
        int cnt = 1;
        while(cin >> val){
            if(val == currentVal){
                ++cnt;
            }else {
                cout << "The value " << currentVal << " occurs " << cnt << " times." << endl;
                currentVal = val;
                cnt = 1;
            }
        }
        cout << "The value " << currentVal << " occurs " << cnt << " times." << endl;
    }
    return 0;
}