#include <iostream>
#include <string>

using namespace std;

struct Sales_data {
    string ISBN;
    double price;
    unsigned num;
    double revenue;
};

int main()
{
    Sales_data s_prev;
    if (cin >> s_prev.ISBN >> s_prev.num >> s_prev.price) {
        Sales_data s;
        int cnt = s_prev.num;
        while (cin >> s.ISBN >> s.num >> s.price) {
            if (s.ISBN == s_prev.ISBN) {
                cnt += s.num;
            } else {
                cout << s_prev.ISBN << " : " << cnt;
                cnt = s.num;
                s_prev = s;
            }
        }
        cout << s_prev.ISBN << " : " << cnt; 
    }
}
