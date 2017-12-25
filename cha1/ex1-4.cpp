#include <iostream>

int main()
{
    int v1, v2;
    std::cout << "input 2 numbers...";
    std::cin >> v1 >> v2;
    
    std::cout << "the product of two numbers :" << v1 << " and " << v2
        << " is " << v1 * v2 << std::endl; 

    /*
    std::cout << "the product of two numbers :" << v1 << " and " << v2;
        << " is " << v1 * v2 << std::endl;
    */

    /*
    std::cout << "the product of ";
    std::cout << v1 << " and " << v2;
    std::cout << " is " << v1*v2;
    std::cout << std::endl;
    */
}
