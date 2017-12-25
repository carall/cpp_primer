#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item s_current, s_total;
    cin >> s_total;
    while (cin >> s_current)
    {
        s_total += s_current;
    }
    cout << s_total;
}
