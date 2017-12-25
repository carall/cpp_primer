#include <iostream>

using namespace std;

int main()
{
    int num;
    if (cin >> num)
    {
        int cnt = 1, num2;
        while (cin >> num2)
        {
            if (num == num2)
            {
                cnt++;
            }
            else
            {
                cout << num << " : " << cnt << endl;
                num = num2;
                cnt = 1;
            }
        }
        cout << num << " : " << cnt << endl;
    }
}
