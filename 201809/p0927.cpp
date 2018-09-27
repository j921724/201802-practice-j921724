#include <iostream>

// objective: return sum of given array
// input: 10 integers or any integer numbers
// output: int 
// restriction: sum array 함수를 구현할 것

int sumArry(int num[10000], int idx){
    int sum = 0;
    for(int i=0; i<idx; i++){
        sum+=num[i];
    }
    return sum;
}

int inputAny(){
    int num[10000];
    int idx = 0;
    int choice = 0;
    std::cout << "Enter any numbers." <<std::endl;
    std::cin >> choice;
    while(choice >= 0){ // n개의 숫자를 입력받는 부분
        num[idx] = choice;
        idx += 1; //실제 array의 elements 개수
        std::cin >> choice;
    }
    std::cout<<"The sum is " << sumArry(num, idx)<<std::endl;
}


//스스로 10개의 숫자 받고 계산해서 출력하는 함수
int sum10(){ 
    int sum, num;
    std::cout << "Enter 10 numbers." << std::endl;
    for(int i=0; i<10; i++){
        std::cin >> num;
        sum += num;}
    std::cout << "The sum is " << sum << std::endl;}


int main(){
    int enter;
    std::cout << "Enter \"1\" : sum of 10 numbers." << std::endl;
    std::cout << "Enter \"2\" : sum of any numbers." << std::endl;
    std::cin >> enter;
    if (enter==1) sum10();
    else if(enter==2) inputAny();
    else std::cout << "Error!" <<std::endl;
    
}