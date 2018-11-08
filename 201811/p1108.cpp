class Name{
    private:
    public:
        char first;
        void foo();
};

void Name::foo(){   //Name(class name)  ::(scope resolution operator)
    first = 'c';
    
}

Name nm;
nm.foo();
Name* pnm;
pnm = &nm;
pnm -> foo()


void Name::foo(char first){ //이렇게 되면 argument로 들어온 first와 class Name 속의 first 사이에 충돌이 일어난다.
    Name::first = 'c'       //앞에 Name 붙여줘서 일차적으로 해결
    this->first = 'c'       //this: pointer variable, 자신의 인스턴스 주소를 가리킴
    
}

상속받은 관계에서는
생성할 때: parent constructor -> child constructor -> grandchild constructor
없앨 때: grandchild constructor -> child constructor -> parent constructor