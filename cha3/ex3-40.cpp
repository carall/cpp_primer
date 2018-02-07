#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ac1[10] = "first";
    //char *ac2 = "second";
    char ac3[] = "third";

    cout << strlen(ac1) << endl;
    cout << sizeof(ac1) << endl;

    char ac4[20];
    strcpy(ac4, ac1);
    strcat(ac4, ac3);
    cout << strlen(ac4) << endl;
    cout << ac4 << endl;
}
