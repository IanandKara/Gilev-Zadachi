#include <iostream>

int main()
{
    int mas[20000];
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
        std::cin >> mas[i];


    // Действия с числами
    int i = 0;
    while (i < n)
    {
        // Проверка условий
        int ch = mas[i];
        bool f1 = false, f2 = false, f3 = true;

        for (int d = 2; d <= sqrt(ch); d++)
            if (ch % d == 0)
            {
                f3 = false;
                break;
            }

        while (ch > 0)
        {
            if (ch % 10 == 7)
                f1 = true;
            if (ch % 10 == 6)
                f2 = true;

            ch /= 10;
           
        }
        
        // Удаление
        if (f1 == 1 && f2 == 0)
        {
            for (int j = i; j < n - 1; j++)
                mas[j] = mas[j + 1];
            n--;
        }
        // Дублирование
        else if (f3 == true)
        {
            for (int j = n; j > i; j--)
                mas[j] = mas[j - 1];
            n++;
            i += 2;
        }
        else i++;
    }


    // Вывод
    for (int i = 0; i < n; i++)
        std::cout << mas[i] << " ";
}
