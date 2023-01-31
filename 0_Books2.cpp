#include <iostream>
using namespace std;
class library
{
private:
    string title, author, publisher;
    float acc_no,price;
public:
    library()
    {}
    library(string t, int acc, string aut, string pub, float pr)
    {
        title = t;
        acc_no = acc;
        author = aut;
        publisher = pub;
        price = pr;
    }
    void input(string t, int acc, string aut, string pub, float pr)
    {
        title = t;
        acc_no = acc;
        author = aut;
        publisher = pub;
        price = pr;
    }
    void printdata()
    {
        cout << "Data of " << title << endl;
        cout << "Acc No. :" << acc_no << endl;
        cout << "Author :" << author << endl;
        cout << "Publisher :" << publisher << endl;
        cout << "Price :" << price << endl;
    }
};
int main()
{
    cout << "This program was made by Rupal Malhotra." << endl;
    library book1("Harry Potter", 4, "JK Rowling", "Bloomsbury", 1000);
    library book2;
    book2.input("Sandman", 5, "Neil Gaiman", "Audible", 500);
    book1.printdata();
    book2.printdata();
    return 0;
}