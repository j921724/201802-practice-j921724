primative type                          user defined type(class)
kind: int, char, double, ...            Car, Student, Human, ...
operation: +, -, *, /, %, ...           ...
declaration:    int a;                  Car b;      생성자(constructor)
initialization: int a = 10;             Car b = ??  할당하면서 초기화(copy constructor)
                a = 10;                 b = ??      assign operator overload
                ...                                 *destructor (만든 object 파괴)
                
                

user defined type, primative type 함께 사용하는 방법
method로 udt 에서 pt을 들고 와서 계산 
Human man;
man.get_old(); 이렇게