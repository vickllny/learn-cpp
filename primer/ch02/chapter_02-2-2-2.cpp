#include <iostream>

using namespace std;

//2.2.2
//page 41
//变量声明和定义的关系

extern int i;//声明i而非定义i
int j;//声明并定义了j
extern int k = 3.14;//定义

//note: 变量只能被定义一次，但是可以被多次声明

//2.2.2
extern int ix = 1024;//定义
int iy;//定义
extern int iz;//声明而非定义  

int main(){
    int j = 200;
    cout << j << endl;
    cout << k << endl;
    
    
    return 0;
}