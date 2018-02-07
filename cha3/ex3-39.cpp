#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s1, s2;
    cout << "result of comparing strings: " << (s1 == s2) << endl;

    char c1[] = "cstyle string";
    char c2[] = "cstyle string";
    cout << "result of comparing c-style strings: " << strcmp(c1, c2) << endl;

}
