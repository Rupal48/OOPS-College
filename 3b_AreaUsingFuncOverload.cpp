#include <iostream>
using namespace std;
class Area
{
public:
    void area(int a)
    {
        cout << 3.14*a*a << endl;;
    }
    void area(int a,int b)
    {
        cout << 0.5*a*b << endl;
    }
    void area(double a,double b)
    {
        cout << a*b << endl;
    }
};
int main()
{
    Area circle,triangle,rectangle;
    cout << "Area of circle : " ;
    circle.area(2);
    cout << "Area of triangle : " ;
    triangle.area(2,3);
    cout << "Area of rectangle : " ;
    rectangle.area(2.1,3.1);
}