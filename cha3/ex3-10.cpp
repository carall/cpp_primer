#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string ns;
    for (auto c : s) {
        if (!ispunct(c)) {
            ns += c;
        }
    }
    cout << s << endl;
    cout << ns << endl;
}
