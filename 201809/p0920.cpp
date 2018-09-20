#include <iostream>
#include <stdio.h>

int main(int argc, char** argv){ // argumentc, argument value
    int i, div, scores[10];
    char grades[10];
    
    std::cout << "Input 10 scores:" <<std::endl;
    for (i=0; i<10; i++){
        std::cin >> scores[i]; //10개의 숫자를 입력받음
        div = scores[i]/10;
        switch(div){
            case 10:
            case 9: grades[i] = 'A';
                break;
            case 8: grades[i] = 'B';
                break;
            case 7: grades[i] = 'C';
                break;
            case 6: grades[i] = 'D';
                break;
            default: grades[i] = 'F';
                break;
        }
    }
    for(i=1; i<=10; i++){
        printf("[%2d] (%3d/100) %c\n", i, scores[i-1], grades[i-1]);
    }
}