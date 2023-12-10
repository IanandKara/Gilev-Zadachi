#include "functions.hpp"
#include <iostream>

namespace ft
{
	void Read(int matrix[N_max][N_max], int& n)
	{
		std::cin >> n;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				std::cin >> matrix[i][j];
		std::cout << std::endl;
	}

	void Write(int matrix[N_max][N_max], int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				std::cout << matrix[i][j] << " ";
			std::cout << std::endl;
		}
	}

	bool SimColumns(int matrix[N_max][N_max], int n)
	{
		for (int j = 0; j < n - 1; j++)
			for (int k = j + 1; k < n; k++)
			{
				int i{ 0 };
				while (i < n)
				{
					if (matrix[i][j] == matrix[i][k])
						i++;
					else
						break;
				}
				if (i == n)
					return true;
				
			}
		return false;
	}

	bool IsPrime(int x)
	{
		for (int d = 2; d < sqrt(x) + 1; d++)
			if (x % d == 0)
				return false;
		return true;
	}

	bool PrimeInMatrix(int matrix[N_max][N_max], int n)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (IsPrime(matrix[i][j]))
					return true;
		return false;
	}

	int LineSum(int matrix[N_max][N_max], int n, int i)
	{
		int sum{ 0 };
		for (int j = 0; j < n; j++)
			sum += abs(matrix[i][j]);
		return sum;
	}

	void ReplaceLines(int matrix[N_max][N_max], int n, int i, int j)
	{
		int tmp = matrix[i][j];
		matrix[i][j] = matrix[i + 1][j];
		matrix[i + 1][j] = tmp;
	}


}
