#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v; // 3 < > - тип данных, которые хранятся в векторе
    int n;
    std::cin >> n;

    // 4
    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        v.push_back(x);
    }
    
    std::cout << "Size = " << v.size() << std::endl;


    v.erase(v.begin() + 1);
    std::cout << "Size = " << v.size() << std::endl;
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << std::endl;


    v.insert(v.begin() + 1, 22);
    std::cout << "Size = " << v.size() << std::endl;
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << std::endl;

    // 5 При выходе за пределы массива at() будет генерировать исключение, тогда как [] может либо вызвать ошибки, либо продолжить работать.а
    std::cout << v[2] << " " << v.at(2) << std::endl << std::endl;

    v.clear();
    std::cout << "Size = " << v.size() << std::endl;
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << std::endl;


    // 1 Изменнения длины массива происходят с помощью управления выделенной памятью
    // 3
    std::cout << v.size() << " " << v.capacity(); // size - кол-во существующих объектов
    //capacity - кол-во объектов, для которых зарезервирована память (сколько вместится без перевыделения памяти)

    v.resize(100); // изменение размера вектора
    v.reserve(2000); // изменение выделенной памяти
    v.shrink_to_fit(); // уменьшение выделенной памяти

    
}
