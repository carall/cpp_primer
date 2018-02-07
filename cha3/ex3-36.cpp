#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int ia1[10], ia2[10];
    vector<int> iv1, iv2;
    cout << "array compare result: " << (ia1 == ia2) << endl;
    cout << "vector compare result: " <<  (iv1 == iv2) << endl;
}
