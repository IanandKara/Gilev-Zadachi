#include <iostream>
#include "functions.hpp"


int main()
{
    int n;
    int matrix[N_max][N_max];

    ft::Read(matrix, n);
    

    if (ft::SimColumns(matrix,n) && ft::PrimeInMatrix(matrix, n))
        for (int i = 0; i < n - 1; i++)
            if (ft::LineSum(matrix, n, i) > ft::LineSum(matrix, n, i + 1))
                for (int j = 0; j < n; j++)
                    ft::ReplaceLines(matrix, n, i, j);


    ft::Write(matrix, n);
}
