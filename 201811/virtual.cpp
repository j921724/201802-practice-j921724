#include <iostream>
#include <vector>

class Shape
{
public:
    virtual void draw() = 0;
};

class Point
{
private:  
    int _x;
    int _y;

public:
    int get_x(){ return _x; }
    int get_y(){ return _y; }
    
public:
    Point(int x, int y)
    {
        _x = x;
        _y = y;
    }
};

class Circle : public Shape
{
private:
    Point _center;
    int   _radius;
    
public:
    Circle(int x, int y, int r)
    :_center(x, y), _radius(r)
    {
        
    }
    
    void draw()
    {
        std::cout << "Center: (" << _center.get_x() << ", " << _center.get_y() << 
                    ") Radius:" << _radius << std::endl;
    }
};

void print_list(std::vector<Shape*>& _list)
{
    for(std::vector<Shape*>::iterator iter = _list.begin();
        iter != _list.end();
        iter++)
    {
        (*iter)->draw();
    }
}

int main()
{
    int choice = 0;
    
    std::vector<Shape*> shape_list;
    
    while(choice != 99)
    {
        std::cout << "Enter choice:";
        std::cin >> choice;
        
        switch(choice)
        {
        case 1:
            {
                int x, y, r;
                std::cout << "X:";
                std::cin >> x;
                
                std::cout << "Y:";
                std::cin >> y;
                
                std::cout << "R:";
                std::cin >> r;
                
                shape_list.push_back(new Circle(x, y, r));
            }
            break;
        }
        
        print_list(shape_list);
    }
    return 0;
}