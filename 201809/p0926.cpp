#include <iostream>

int main(){
    int ddays[12] = {31, 30, 31, 31, 28, 31, 30, 31, 30, 31, 31, 13};
    int month, date;
    int remainDay[2];
    
    std::cout << "다음 추석이 얼마나 남았을까요?? \nEnter the month: " << std::endl; 
    std::cin >> month;
    std::cout << "Enter the date: "<< std::endl;
    std::cin >> date;
    
    if (month <= 9){
        remainDay[0] = 9-month;
        remainDay[1] = ddays[2+month]-date;
    }else{
        remainDay[0] = 21-month;
        remainDay[1] = ddays[month-9]-date;
    }
    std::cout << remainDay[0] << "달 하고도 " << remainDay[1] << "일 남았습니다." <<std::endl;
}