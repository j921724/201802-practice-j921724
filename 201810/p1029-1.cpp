#include <iostream>
int main()
{   int* var = new int; // int space만큼의 data object를 만들고, 그 주소를 var에 넘겨줌
    {
        // int* var = new int; <-이게 여기 들어오면 scope, data memory object 관련에 문제 생김
        // int space만큼 공간이 생기고 그 주소를 할당하는데 
        // new를 통해 할당된 메모리 스페이스와 주소값을 저장하기 위해 생성된 int*
        // 즉 두개의 공간이 생김. 그래서 나가면 new로 만들어진 공간은 해지되지 않는다...라고 함...띠용
    
        int var1=2; // 이 안에서만 유효, 바깥으로 가면 삭제되는 값
    } 
    int var1=0;
    return 0;
    
}