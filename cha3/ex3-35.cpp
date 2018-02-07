#include <iostream>

using namespace std;

int main()
{
    int vi[10] = {1,2,3,4,5,6};
    for (int *beg = begin(vi); beg != end(vi); ++beg) {
        *beg = 1;
    }
    for (int i : vi) {
        cout << i;
    }
}
