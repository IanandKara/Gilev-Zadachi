#include <iostream>

int main()
{
    int mas[1000];
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> mas[i];


    for (int i = 0; i < n-1; i++)
        for (int j = i + 1; j < n; j++)
        {
            // Данные для условий
            int f_i = mas[i];
            while (f_i > 9)
                f_i /= 10;
            int f_j = mas[j];
            while (f_j > 9)
                f_j /= 10;

            int sum_i = 0;
            int tmp = mas[i];
            while (tmp > 0)
            {
                sum_i += tmp % 10;
                tmp /= 10;
            }
            int sum_j = 0;
            tmp = mas[j];
            while (tmp > 0)
            {
                sum_j += tmp % 10;
                tmp /= 10;
            }

            // Сортировка
            if (f_i > f_j)
            {
                int tmp = mas[i];
                mas[i] = mas[j];
                mas[j] = tmp;
            }
            else if (f_i == f_j && sum_i > sum_j)
            {
                int tmp = mas[i];
                mas[i] = mas[j];
                mas[j] = tmp;
            }
            else if(f_i == f_j && sum_i == sum_j && mas[i] > mas[j])
            {
                int tmp = mas[i];
                mas[i] = mas[j];
                mas[j] = tmp;
            }

        }

    std::cout << std::endl;
    for (int i = 0; i < n; i++)
        std::cout << mas[i] << " ";
}
