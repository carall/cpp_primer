#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi{1,2,3,4,5,6,7,8,9,10};
    for (int &i : vi) {
        i *= 2;
        cout << i << endl;
    }
    return 0;
}
