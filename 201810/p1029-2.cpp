#include <iostream>
#include <cstring>
#include <stdlib.h>

void Eliminate(char *str, char ch[])
{
   for (; *str != '\0'; str++)//종료 문자를 만날 때까지 반복
   {
       for (int i =0 ; i<5; i++)
       {
           char A = ch[i];
           if (*str == A)//ch와 같은 문자일 때
           {
               strcpy(str, str + 1);
               str--;
           }
       }
   }
}


int main(int argc, char** argv)
{
  char buff[100];
  char ch[5] ={'a','e','i','o','u'};
   std::cout << "Enter a string " << std::endl;
   std::cout << ">>";
   std::cin>> buff;
   Eliminate(buff, ch);
   std::cout << "Broken Keyboard Ouput:"<< buff<<std::endl;
   

   return 0;
}