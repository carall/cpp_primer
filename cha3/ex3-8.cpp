#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s{"some string"};
    cout << s << endl;
    string::size_type i = 0;
    while (i < s.size()) {
        s[i] = 'x';
        i++;
    }
    cout << s << endl;

    i = 0;
    for (; i < s.size(); i++) {
        s[i] = 'f';
    }
    cout << s << endl;
}
