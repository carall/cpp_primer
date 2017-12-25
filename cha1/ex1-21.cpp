#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item s1, s2;
    cin >> s1 >> s2;
    if (s1.isbn() == s2.isbn())
    {
        Sales_item s = s1 + s2;
        cout << s;
    }
    else
    {
        cout << "wrong input!";
    }
}
