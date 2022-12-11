#include <iostream>
using namespace std;

class car
{
private:
    string carmodel;

public:
    int speed;
    void display();
    void getdata()
    {
        cout << "enter car model : \n";
        cin >> carmodel;
        cout << "enter car speed per hour : \n";
        cin >> speed;
    }
};

void car::display()
{
    cout << "car model is " << carmodel << "\n";
}
int main()
{
    car c1;
    c1.getdata();
    c1.display();
    car E2;
    c2.getdata();
    c1.display();
    car c3;
    c3.getdata();
    c1.display();
    int max = 0;
    if (c1.speed < c2.speed)
    {
        if (c2.speed < c3.speed)
        {
            max = c3.speed;
        }
        else
        {
            max = c2.speed;
        }
    }
    else
    {
        if (c1.speed < c3.speed)
        {
            max = c3.speed;
        }
        else
        {
            max = c1.speed;
        }
    }
    cout << "The maximum speed is " << max;

    return 0;
}