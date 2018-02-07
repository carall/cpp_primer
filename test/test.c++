#include <iostream>

using namespace std;

int main()
{
    char ch = 127 + 2;
    ch = 0x81;
    ch = 0x9b;
    //原码、补码、反码
    //正数：原码=补码=反码
    //负数：-x = ~x + 1;
    //-128 = ~128 +1; ==>>  -128 = ~(1 0000 0000) + 1 = 0 1111 1111 + 1 = 1 0000 0000 = 0000 0000(单字节去掉溢出的高位1)
    //ch = 077;
    printf("%d\n", ch);
    printf("%d\r", ch);


    //unsigned char uch = 255 + 2;
    //printf("%d\n", uch);

    cout << "bool: " << sizeof(bool) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
}
