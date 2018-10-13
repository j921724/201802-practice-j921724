#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdio>
int main(){
    char str[80];
    int i;
    strcpy(str, "this is a test");
    for(i=0; str[i]; i++)
        str[i] = toupper(str[i]);
    std::cout << str << std::endl;
    return 0;
}