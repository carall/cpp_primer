#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> iv;
    int i;
    while (cin >> i) {
        iv.push_back(i);
    }

    auto s = iv.size();
    if (s < 2) {
        cout << "not enough input!" << endl;
        return -1;
    }

    auto beg = iv.cbegin(), end = iv.cend();
    while (beg + 1 != end) {
        cout << *beg + *(++beg) << endl;
    }
    cout << endl << endl;

    auto b = iv.cbegin(), e = iv.cend();
    while (b <= e) {
        cout << *(b++) + *(--e) << endl;
    }
}
