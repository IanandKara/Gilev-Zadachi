#include <iostream>

int main()
{
    int e1{ 23942 };
    short e2{ 8201 };
    char e3{ 102 };
    long e4{ 930153896 };
    long long e5{ 2917965306 };
    bool e6{ true };
    float e7{ 194.29 };
    double e8{ 3.14159 };

    std::cout << "int: size = 2/4 bytes  min = " << INT_MIN << "  max = " << INT_MAX << "  max uns. = " << UINT_MAX << "  ex. : " << e1 << std::endl;
    std::cout << "short: size = 2 bytes    min = " << SHRT_MIN << "  max = " << SHRT_MAX << "  max uns. = " << USHRT_MAX << "  ex. : " << e2 << std::endl;
    std::cout << "char: size = 1 byte     min = " << CHAR_MIN << "  max = " << CHAR_MAX << "  max uns. = " << UCHAR_MAX << "  ex. : " << e3 << std::endl;
    std::cout << "long: size = 4/8 bytes  min = " << LONG_MIN << "  max = " << LONG_MAX << "  max uns. = " << ULONG_MAX << "  ex. : " << e4 << std::endl;
    std::cout << "long long: size = 8 bytes    min = " << LLONG_MIN << "  max = " << LLONG_MAX << "  max uns. = " << ULLONG_MAX << "  ex. : " << e5 << std::endl;
    std::cout << "bool: size = 1 byte     min =  0  max = 1  ex. : " << e6 << std::endl;
    std::cout << "float: size = 4 bytes    min = " << FLT_MIN << "  max = " << FLT_MAX << "  ex. : " << e7 << std::endl;
    std::cout << "double: size = 8 bytes    min = " << DBL_MIN << "  max = " << DBL_MAX << "  ex. : " << e8 << std::endl;
    


    std::cout << std::endl << "Errors: " << std::endl;

    char er1{ 2952 };
    unsigned short er2{ -461 };
    bool er3{ 77 };

    std::cout << er1;
    std::cout << er2;
    std::cout << er3;
}
