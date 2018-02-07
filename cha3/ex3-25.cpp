#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned> vu(11, 0);
    unsigned u;
    auto beg = vu.begin();
    while (cin >> u) {
        if (u <= 100 ) {
            *(beg + u / 10) += 1;
        }
    }

    while (beg != vu.cend()) {
        cout << *beg << endl;
        ++beg;
    }
}
