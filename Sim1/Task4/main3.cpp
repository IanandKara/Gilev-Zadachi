#include <iostream>

int main()
{
    short x;
    std::cin >> x;
    
    if (x == 1) // Используется If, потому что по условию x может принимать только 2 значения 
        std::cout << "Positive number";
    else
        std::cout << "Negative number";

}
