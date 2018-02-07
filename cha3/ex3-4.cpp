#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2) {
        cout << s1 << "equals to " << s2 << endl;
    } else if (s1.size() == s2.size()) {
        cout << s1 << " has the same length with " << s2 << endl; 
    } else {
       cout << ((s1.size() > s2.size()) ? s1 : s2) << " is larger";
    }
}
