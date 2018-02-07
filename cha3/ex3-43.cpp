#include <iostream>

using namespace std;

int main()
{
    cout << "one dimension array:\n";

    int a1[] = {1,2,3,4,5,6,7,8};
    
    cout << "range for: ";
    for (int i : a1)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "for: ";
    for (int i = 0; i < sizeof(a1)/sizeof(int); ++i)
    {
        cout << a1[i] << " ";
    }
    cout << endl;

    cout << "pointers: ";
    for (int *p = a1; p != end(a1); ++p)
    {
        cout << *p << " ";
    }
    cout << endl;


    cout << "two demensions array:" << endl;

    int a2[][4] = {1,2,3,4,5,6,7,8,9,10,11};

    cout << "range for: " << endl;
    for (const int (&row)[4] : a2)//引用
    {
        for (int i : row)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "for: " << endl;
    for (int i = 0; i < sizeof(a2)/sizeof(a2[0]); ++i)
    {
        for (int j = 0; j < sizeof(a2[0])/sizeof(int); ++j)
        {
            cout << a2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "pointers: " << endl;
    for (const int (*row)[4] = begin(a2); row != end(a2); ++row)
    {
        for (const int *p = begin(*row); p != end(*row); ++p)
        {
            cout << *p << " ";
        }
        cout << endl;
    }
}
