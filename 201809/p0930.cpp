#include <iostream>

int main(){
    int pocket = 70000;
    int sum =0;
    int money = 0;
    std::cout << "얼마나 사용했나요? "  << std::endl;;
    std::cin >> money;
    
    //사용한 금액 다 더함
    while(money>0){ 
        sum += money;
        
        std::cin >> money;
    }
    
    //적절하게 사용했는지 판단
    if (sum>pocket){
        std::cout<<"돈을 너무 많이 썼습니다. " << sum-pocket << "원의 예산 초과 금액이 발생했습니다." <<std::endl;
    }else std::cout << "적절하게 사용했습니다. " << pocket-sum << "원의 예산이 남았습니다." <<std::endl;
}
