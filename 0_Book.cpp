#include <iostream>
#include <cstring>
using namespace std;
class BOOK
{
private:
    int BOOK_NO;
    char BOOK_TITLE[20];
    char BOOK_TYPE[20];
    float PRICE;
    float TOTAL_COST(int N)
    {
        float total;
        total = PRICE * N;
        return total;
    }
public:
    void INPUT()
    {
        cout << "Enter book no.:";
        cin >> BOOK_NO;
        cout << "Enter the theme of the book:";
        cin >> BOOK_TYPE;
        cout << "Enter book title:";
        cin >> BOOK_TITLE;
        cout << "Enter price of the book:";
        cin >> PRICE;
    }
    void PURCHASE()
    {
        cout << "Enter the number of copies to be purchased:";
        int n;
        cin >> n;
        cout << "Total cost to be paid by the user:" << TOTAL_COST(n) << "/- rupees" << endl;
    }
    void Compare()
    {
        if (!(strcmp(BOOK_TYPE, "Comedy")))
        {
            cout << "Book No.:" << BOOK_NO << endl;
            cout << "Book Title:" << BOOK_TITLE << endl;
            cout << "Price:" << PRICE << endl;
        }
    }
};
int main()
{
    cout << "This program was made by Rupal Malhotra." << endl;
    BOOK b[2];
    for (int i = 0; i < 2; i++)
    {
        b[i].INPUT();
        b[i].PURCHASE();
    }
    for (int i = 0; i < 2; i++)
    {
        b[i].Compare();
    }
    return 0;
}