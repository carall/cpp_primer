#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item s1;
    if (cin >> s1)
    {
        Sales_item s2;
        while (cin >> s2)
        {
            if (s1.isbn() == s2.isbn())
            {
                s1 += s2;
            }
            else
            {
                cout << s1 << endl;
                s1 = s2;
            }
        }
        cout << s1 << endl;
    }
}
