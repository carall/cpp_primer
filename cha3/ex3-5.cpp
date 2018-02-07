#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, ls, ss;
    while (cin >> s) {
        ls += s;
        ss += s + " ";
    }
    cout << ls << endl;
    cout << ss << endl;
}
