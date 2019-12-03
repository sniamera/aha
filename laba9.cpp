#include <iostream>
#include <string>
using namespace std;
const double pi = 3.1415926;
enum Type {circle = 1, square, trapeze, ring};
class Shape {

private:
    int id;
    Type type;
public:
    //Shape(int ids, string types) : id(ids), Type(types){};
    Shape(int ids, string types) : id(ids){};



};

class Shape2d : public Shape {
    public:
    Shape2d();
    Shape2d(int ids, string types) : Shape(ids, types){};
    virtual double perimetr(){return 0;}
};

class Circle : public Shape2d{
    public:
    double radius;
    virtual double perimetr();
Circle (int rs) : radius(rs){};
    {
        return 2 * pi * radius;
    }

};

class Shape2d : public Shape {
public:
virtual double volume(){};
};

int main(){
    Circle circle(2);
cout << circle.perimetr();
return 0;

}

