vector<T>: templete의 T
ex) T getValue()
    void setValue(T _val)   //이렇게 설정해두면
    vector<int>     //T부분에 사용자가 입력한 타입을 넣어주면 자유자재로 가공할 수 있다
    int getValue()
    void setValue(T _val)
    
vector->연속적으로 저장
STL vector constructor
Properties(다 외우기~) p.5
Iterators
STL는 다 외우세요~~~~###

&: reference type ->identifier를 가져옴

** STL에서는 remove는 컨데이너만 삭제하고 컨텐츠는 삭제하지 않음
즉 .clear 하면 pointer variable 만 삭제하고 그 값은 삭제 안됨.
포인터 variable로 설정한 데이터는 직접 삭제해줘야한다. -> memory leak problem
값을 전부 삭제할 때는 delete *iter를 써서 데이터를 다 삭제하고 그다음에 컨데이너 삭제하면 깨-끗. 

std::vector<Shape*> shape_list;
shape_list is Shape pointer type value, size=0 