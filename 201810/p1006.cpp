#include <cstdio>

int main(){
    int num1 = 10;
    int* num2 = &num1;
    int arr1[] = {77,3,5};
    int* arr2 = arr1;
    char str1[] = "I love programming!";
    char* str2 = str1;
    
    printf("-----value check-----\n");
    printf("@ num2: %p\n", num2);
    printf("@ size of num1: %ld\n", (sizeof(num1)));
    printf("@ size of num2(maybe pointer size): %ld\n", (sizeof(num2)));
    printf("@ size of *num2: %ld\n\n", (sizeof(*num2)));
    
    printf("-----array check-----\n");
    printf("@ arr2: %p\n", arr2);
    printf("@ *arr2(maybe the first value of the array): %d\n", *arr2);
    printf("@ size of arr2: %ld\n", sizeof(arr2));
    printf("@ size of *arr2: %ld\n\n", sizeof(*arr2));
    
    printf("-----string check-----\n");
    printf("@ str1: %s\n", str1);
    printf("@ *str2: %d  (I think this is ASCII code of first letter)\n", *str2);
    printf("@ str2 as a pointer: %p\tstr2 as a string: %s\n", str2, str2);
    printf("@ size of str1: %ld\n", (sizeof(str1)));
    printf("@ size of str2: %ld\n", (sizeof(str2)));
    printf("@ size of *str2: %ld\n", (sizeof(*str2)));
    
    
}