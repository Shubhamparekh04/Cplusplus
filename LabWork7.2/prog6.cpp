/*
5 4 3 2 1 
  5 4 3 2 
    5 4 3 
      5 4 
        5 
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            cout << "  ";
        }

        for (int k = 5; k >= i; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}