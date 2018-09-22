#include <iostream>

int sumAry(int num, int ary[]){
    int sum = 0;
    for (int i=0; i<num; i++){
        sum += ary[i];
    }
    return sum;
}

int main(){
    int iary[5] = {3,5,7,9,11};
    int x;
    x = sumAry(5, iary);
    std::cout << "Sum: " << x << std::endl;
}