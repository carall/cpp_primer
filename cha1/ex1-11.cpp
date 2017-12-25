#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "insert 2 numbers(the 1st is smaller):";
    cin >> a >> b;
    for (int i = a; a <= b; a++)
    {
        cout << a << endl;
    }
}
