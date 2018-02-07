#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s{"some string"};
    cout << s << endl;
    for(char &c : s) {
        c = 'x';
    }
    cout << s << endl;
}
