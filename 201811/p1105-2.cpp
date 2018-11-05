#include <iostream>

int overloadSum(int a, int b, int c)
{
std::cout << "(i i i) version" << std::endl;
return (a + b + c);
}
float overloadSum(float a, float b, float c)
{
std::cout << "(f f f) version" << std::endl;
return (a + b + c);
}
float overloadSum(int a, float b, float c)
{
std::cout << "(i f f) version" << std::endl;
return (a + b + c);
}
//int overloadSum(int a, float b, float c)
//{
//std::cout << "(i f f) version" << std::endl;
//return (a + b + c);
//}


int main(void)
{
    float ans;
    float f1 = 6.4;
    float f2 = 4.2;
    int i1 = 4;
    int i2 = 6;
    ans = overloadSum(f1, f2, f2);
    std::cout << ans << std::endl;
    //This (can) produce a compiler warning!
    ans = overloadSum(i1, i2, i2);
    std::cout << ans << std::endl;
    //This produces a compiler error!
    //ans = overloadSum(i2, i1, f1);
    //cout << ans << endl;
    ans = overloadSum(i2, (float)i1, f1);
    std::cout << ans << std::endl;
    return(0);
}