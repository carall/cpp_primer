#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = i;
    }

    int arr2[10];
    for (int i = 0; i < 10; ++i) {
        arr2[i] = arr[i];
    }

    for (int a : arr2) {
        cout << a << ',';
    }
    cout << endl;

    vector<int> vi;
    for (int i = 0; i < 10; ++i) {
        vi.push_back(i);
        //vi[i] = i; error, wrong range;
    }

    vector<int> vi2 = vi;

    for (int a : vi2) {
        cout << a << ',';
    }
    cout << endl;
}
