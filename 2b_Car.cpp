#include <iostream>
using namespace std;
class car
{
    private:
        string name;
        float speed;
    public:
        void getname(string a)
        {
            name = a;
        }
        void getspeed(int n)
        {
            speed = n;
        }
};
void fastest(int a,int b,int c)
{
    if (a>b)
    {
        if(a>c)
        {
            cout << c1.name << " is fastest." << endl;
        }
    }
}
int main()
{
    car c1,c2,c3;
    c1.getname("Rupal Ki Lambo");
    c1.getspeed(300);
    c2.getname("Shivam Ki Maruti");
    c2.getspeed(50);
    c3.getname("Deepanshu Ki Malgadi");
    c3.getspeed(10);
    cout << fastest(c1,c2,c3)
    return 0;
}