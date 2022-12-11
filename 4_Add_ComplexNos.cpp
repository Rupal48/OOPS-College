#include <iostream>
using namespace std;
class Complex
{
    private:
    int real,imaginary;
    public:
    Complex()
    {}
    Complex(int a)
    {
        real=a;
        imaginary=a;
    }
    Complex(int a,int b)
    {
        real=a;
        imaginary=b;
    }
    Complex Add(Complex c1,Complex c2)
    {
        Complex Sum;
        Sum.real=c1.real+c2.real;
        Sum.imaginary=c1.imaginary+c2.imaginary;
        cout << "Real Part and Imaginary part of Sum is:" << Sum.real << ' ' << Sum.imaginary << endl;
        return 0;
    }
};
int main()
{
    Complex c1(1,1),c2(2,4),c3;
    c3.Add(c1,c2);
    return 0;
}