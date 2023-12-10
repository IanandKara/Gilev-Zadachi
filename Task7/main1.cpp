#include <iostream>

int main()
{
    int mas[1000];
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> mas[i];
    

    for (int i = 0; i < n; i++)
    {
        int f_n = mas[i];
        while (f_n > 9)
            f_n /= 10;

        if (f_n == 1)
        {
            for (int i = 0; i < n - 1; i++)
                for (int j = i + 1; j < n; j++)
                    if (mas[i] > mas[j])
                    {
                        int tmp = mas[i];
                        mas[i] = mas[j];
                        mas[j] = tmp;
                    }
            break;
        }
    }

    
    std::cout << std::endl;
    for (int i = 0; i < n; i++)
        std::cout << mas[i] << " ";
}
