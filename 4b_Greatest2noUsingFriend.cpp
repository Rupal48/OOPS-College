#include <iostream>
using namespace std;
class B;
class A
{
private:
    int n;
public:
    A(int a)
    {
        n = a;
    }
    void friend Compare(A a, B b);
};
class B
{
private:
    int n;
public:
    B(int b)
    {
        n = b;
    }
    void friend Compare(A a, B b);
};
void Compare(A a, B b)
{
    if (a.n > b.n)
    {
        cout << "No. in class A is greater.";
    }
    if (a.n < b.n)
    {
        cout << "No. in class B is greater.";
    }
    if (a.n == b.n)
    {
        cout << "No.s are equal.";
    }
}
int main()
{
    cout << "This program was made by Rupal Malhotra." << endl;
    int n, m;
    cout << "Enter first no. in class A:";
    cin >> n;
    cout << "Enter second no. in class B:";
    cin >> m;
    A a(n);
    B b(m);
    Compare(a, b);
    return 0;
}