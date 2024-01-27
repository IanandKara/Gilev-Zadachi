#include <iostream>

int main()
{
    int n, m, min_sum{ INT_MAX }, line{ 0 };
    std::cin >> n >> m;

    int **mat = new int*[n];

    for (int i = 0; i < n; i++)
        mat[i] = new int[m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            mat[i][j] = rand();



    //Сравнение сумм элементов строк
    for (int i = 0; i < n; i++)
    {
        int str_sum = 0;
        for (int j = 0; j < m; j++)
            str_sum += mat[i][j];

        if (abs(str_sum) < abs(min_sum))
        {
            min_sum = abs(str_sum);
            line = i;
        }
    }

    //Замена элементов наименьшей строки на 0
    for (int j = 0; j < m; j++)
    {
        mat[line][j] = 0;
    }
     
    std::cout << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;
    mat = nullptr;
}
