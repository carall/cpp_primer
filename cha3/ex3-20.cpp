#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> iv;
    int i;
    while (cin >> i) {
        iv.push_back(i);
    }
    auto length = iv.size();
    for (unsigned n = 0; n < length - 1; ++n) {
        cout << iv[n] + iv[n+1] << endl;
        cout << iv[n] + iv[length-1-n] << endl;
    }
    return 0;
}
