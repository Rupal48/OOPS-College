#include <iostream>
#include <cstring>
using namespace std;
class useless
{
private:
    char str[100], str1[100];

public:
    void getString()
    {
        cout << "Enter 2 strings: ";
        cin >> str >> str1;
    }
    void operator+()
    {
        cout << "Concatenated String: " << strcat(str, str1) << endl;
    }
    void operator=(char newstr[])
    {
        strcpy(newstr, str1);
        // newstr = str;                can also use this as = operator is already overloaded in c++ by default.
    }
    void operator<=(char ggs[])
    {
        int greater = strcmp(ggs, str1);
        if (greater > 0)
            cout << ggs << " is greater." << endl;
        else if (greater < 0)
            cout << str << " is greater" << endl;
        else
            cout << "Both srings are equal." << endl;
    }
    void len()
    {
        cout << "Length of string " << str << ": ";
        cout << strlen(str) << endl;
    }
    void toggle()
    {
        int len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            int c = str[i];
            if (islower(c))
                str[i] = toupper(c);
            else if (isupper(c))
                str[i] = tolower(c);
        }
        cout << "String after toggling size of letters: " << str << endl;
    }
};
int main()
{
    useless a;
    a.getString();
    +a;
    char gg[100], nt[100];
    a = gg;
    cout << "Copy 2nd string in gg: " << gg << endl;
    cout << "Enter the string you wanna compare with 2nd string: ";
    cin >> nt;
    a <= nt;
    a.len();
    a.toggle();
    return 0;
}