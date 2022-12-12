#include <iostream>
using namespace std;
class Factorial
{
private:
    int n;

public:
    int factorial(int n)
    {
        if (n == 0 || n == 1)
            return n;
        return n * factorial(n - 1);
    }
};
int main()
{
    Factorial f;
    int n;
    cout << "Enter the no. whose factorial you wanna find :";
    cin >> n;
    cout << f.factorial(n);
}