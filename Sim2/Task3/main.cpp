#include <iostream>
#include <cstring>

class Strg
{
    int len;
    char* str;

public:
    //Конструктор
    Strg(const char* strA)
    {
        len = strlen(strA);
        str = new char[len + 1];
        strcpy_s(str, len + 1, strA);
    }

    //Конструктор копирования
    Strg(const Strg& other)
    {
        len = other.len;
        str = new char[len + 1];
        strcpy_s(str, len + 1, other.str);
    }

    //Оператор присваивания копирования
    Strg& operator=(const Strg& other) 
    {
        delete[] str;

        len = other.len;
        str = new char[len + 1];
        strcpy_s(str, len + 1, other.str);

        return *this;
    }

    //Вывод строки
    void Print()
    {
        std::cout << str << std::endl;
    }

    //Деструктор
    ~Strg() 
    {
        delete[] str;
    }
};

int main()
{
    Strg str1("Hello, world!");
    Strg str2("Bye, world.");
    Strg str3 = str1; // Конструктор копирования

    str1.Print();
    str2.Print();
    str3.Print();

    str1 = str2; // Присваивание копирования
    str1.Print();

    return 0;
}