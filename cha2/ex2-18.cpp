#include <iostream>

using namespace std;

int main()
{
    int i = 10, *p = &i;
    cout << *p << endl;
    int j = 20;
    p = &j;
    cout << *p << endl;
    *p = i;
    cout << j << endl;
}
