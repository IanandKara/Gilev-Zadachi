#include <iostream>
#include <cmath>

class Rectangle
{
    // Поля
    int Len, Wid;

public:
    // Конструкторы
    Rectangle() = default;
    Rectangle(int a, int b)
    {
        SetLW(a, b);
    }

    void SetLW(int a, int b) // Сеттер
    {
        if ((a < 0) || (b < 0))
        {
            std::cout << "Error: negative length" << std::endl;
        }
        Len = a;
        Wid = b;
    }

    int Area() // Площадь
    {
        return Len * Wid;
    }

    int Perimeter() // Периметр
    {
        return 2 * (Len + Wid);
    }

    double Diagonal() // Диагональ
    {
        return sqrt(Len * Len + Wid * Wid);
    }

    void Print() // Вывод значений
    {
        std::cout << "Area = " << Area() << std::endl;
        std::cout << "Perimeter = " << Perimeter() << std::endl;
        std::cout << "Diagonal = " << Diagonal() << std::endl;
    }
};


int main()
{
    Rectangle RE1{};
    int a, b;
    std::cout << "Write Rectangle_1 length and width: ";
    std::cin >> a >> b;
    RE1.SetLW(a, b);

    std::cout << "Rectangle_1:" << std::endl;
    RE1.Print();


    Rectangle RE2(4, 3);
    std::cout << "\n" <<"Rectangle_2:" << std::endl;
    RE2.Print();

    return 0;
}