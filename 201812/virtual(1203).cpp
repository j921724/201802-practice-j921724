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

class Rectangle : public Shape
{
private:
    Point _top_left;
    Point _bottom_right;
    
public:
    Rectangle(int x1, int y1, int x2, int y2)
    :_top_left(x1, y1), _bottom_right(x2, y2)
    {
        
    }
    
    void draw()
    {
        std::cout << " (" << _top_left.get_x() << ", " << _top_left.get_y() << ") " 
        << " (" << _bottom_right.get_x() << ", " << _bottom_right.get_y() << ")" << std::endl;
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

//2018.12.03 added
void remove_all(std::vector<Shape*>& _list)
{
    for(std::vector<Shape*>::iterator iter = _list.begin();
        iter != _list.end();
        iter++)
        {
            delete *iter;
        }
        
    _list.clear();
}
//2018.12.03 added

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
        case 2:
            {
                int x, y, x2, y2;
                std::cout << "X1:";
                std::cin >> x;
                
                std::cout << "Y1:";
                std::cin >> y;
                
                std::cout << "X2:";
                std::cin >> x2;
                
                std::cout << "Y2:";
                std::cin >> y2;
                
                shape_list.push_back(new Rectangle(x, y, x2, y2));
            }
            break;
        }
        
        print_list(shape_list);
    }
    return 0;
}