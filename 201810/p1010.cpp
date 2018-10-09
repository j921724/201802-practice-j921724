#include <iostream>
using namespace std;

int overloadSum(int a, int b, int c){
    cout << "(i i i) version"<<endl;
    return (a+b+c);
}

float overloadSum(float a, float b, float c){
    cout<<"(f f f)  version" <<endl;
    return(a+b+c);
}

float overloadSum(int a, float b, float c){
    cout << "(i f f) version" <<endl;
    return(a+b+c);
}

int main(void){
    float ans;
    float f1 =6.4;
    float f2 = 4.2;
    int i1 = 4l;
    int i2 = 6;
    
    ans = overloadSum(f1, f2, f2);
    cout << ans << endl;
    
    ans = overloadSum(i1, i2, i2);
    cout << ans <<endl;
    
    //compile error: overload할 function이 없음(int int float인 함수 존재 X)
    //ans = overloadSum(i2, i1, f1);
    //cout << ans << endl;
    
    ans = overloadSum(i2, (float)i1, f1);
    cout <<ans << endl;
    
    return(0);
}