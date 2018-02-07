#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    vector<int> v1;
    auto i = v1.begin();
    for (n = 0; i != v1.end(); ++i, ++n);
    cout << n << endl;
}
