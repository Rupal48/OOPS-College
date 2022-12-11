#include <iostream>
using namespace std;
class myclass
{
    public:
    void displaydata()
    {
        cout << "Hello World" << endl;
    }
};
int main()
{
    cout << "This program was made by Rupal Malhotra." << endl;
    myclass a;
    a.displaydata();
    return 0;
}