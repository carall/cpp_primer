#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s{"some string"};
    cout << s << endl;
    for(auto &c : s) {
        c = 'x';
    }
    cout << s << endl;
}
