#include <iostream>
using namespace std;
class Employee
{
private:
    string name, address;
    int BasicSalary, TA, DA, GrossSalary;
public:
    inline void getpersonaldata()
    {
        string a, b;
        cin >> a >> b;
        name = a;
        address = b;
    }
    inline void getsalary()
    {
        int n, m, o;
        cin >> n >> m >> o;
        BasicSalary = n;
        TA = m;
        DA = o;
        GrossSalary = n + m + o;
    }
    inline void printdata()
    {
        cout << "Name of the employee is:" << name << endl;
        cout << "Address of the employee is:" << address << endl;
        cout << "Gross Salary of the employee is:" << GrossSalary << endl;
    }
};
int main()
{
    cout << "This program was made by Rupal Malhotra." << endl;
    int n, i;
    cout << "Enter the total no. of employees:";
    cin >> n;
    Employee e[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter name and addresss of the employee " << i + 1 << ':';
        e[i].getpersonaldata();
        cout << "Enter Basic Salary, TA, DA respectively of employee  " << i + 1 << ':';
        e[i].getsalary();
    }
    cout << "Data of the employees are:" << endl;
    for (i = 0; i < n; i++)
    {
        e[i].printdata();
    }
    return 0;
}