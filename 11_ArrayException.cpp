#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Enter the index you wanna refer to :";
    int n;
    cin >> n;
    try
    {
        if (n > 5)
        {
            throw(n);
        }
        cout << "arr[" << n << "]=" << arr[n];
    }
    catch (int x)
    {
        cout << "Array index " << x << " is out of bounds";
    }
}