#include <iostream>
using namespace std;

int f(int g)
    {
        if (g == 0 || g == 1)
            return g;
        return g * f(g - 1);
    }
class factorial
{
private:
    int n;

public:
    factorial(int a)
    {
        n=a;
        cout << f(n);
    }
};
int main()
{
    int x;
    cout << "Enter the no. whose factorial you wanna find :";
    cin >> x;
    factorial f(x);
}