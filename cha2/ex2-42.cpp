#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main()
{
    Sales_data s;
    Sales_data s_total;
    while (cin >> s.ISBN >> s.num >> s.price) {
        cout << s.ISBN << " "  << s.num  << " " << s.price * s.num << endl;
        s_total.ISBN = s.ISBN;
        s_total.num += s.num;
        s_total.revenue += s.price * s.num;
    }
    cout << "total: " << s_total.ISBN << " " << s_total.revenue;
}
