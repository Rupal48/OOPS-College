#include <iostream>
using namespace std;
int main()
{
    cout << "This program was made by Rupal Malhotra." << endl;
    int i, j, k, r1, r2, c1, c2, a[10][10], b[10][10], c[10][10];
    cout << "Enter the order of matrix 1:";
    cin >> r1 >> c1;
    cout << "Enter the order of matrix 2:";
    cin >> r2 >> c2;
    if (c1 == r2)
    {
        cout << "Enter matrix 1:" << endl;
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Enter matrix 2:" << endl;
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                cin >> b[i][j];
            }
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        cout << "Resultant of Matrix Multiplication is:" << endl;
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Multiplication of these two matrices is not possible.";
    }
}