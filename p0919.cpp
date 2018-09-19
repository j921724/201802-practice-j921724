#include <iostream>

int main(){
    int juhee = 8;
    int jiwon = 49;
    int fri = juhee ^ jiwon;
    
    std::cout << "juhee is 0000 1000." << std::endl;
    std::cout << "jiwon is 0011 0001." << std::endl;
    std::cout << "juhee^jiwon = 0011 1001 = 57. then fri is " << fri << std::endl; 
}