#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int ia[10] = {1,2,3,4,5,6,7,8};
    vector<int> iv(begin(ia), end(ia));
    for(auto i : iv)
    {
        cout << i << ",";
    }
    cout << endl;

    int ia2[iv.size()];
    cout << sizeof(iv) << endl;
    cout << sizeof(int) << endl;
    for (int i = 0; i < 10; ++i)
    {
        ia2[i] = iv[i];
    }
    for(auto i : ia2)
    {
        cout << i << ",";
    }
}
