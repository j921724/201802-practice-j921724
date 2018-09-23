#include <stdio.h>

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    int *pa;
    pa = a;
    for(int i=0; i<10; i++){
        printf("a[%1d] = %d, ", i, *(a+i));
        printf("*(pa+%1d) = %d\n", i, *(pa++));
    }
    
}