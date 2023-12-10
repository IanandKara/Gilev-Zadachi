#pragma once
#define N_max 100

namespace ft
{
	void Read(int matrix[N_max][N_max], int& n);

	void Write(int matrix[N_max][N_max], int n);

	bool SimColumns(int matrix[N_max][N_max], int n);

	bool IsPrime(int x);

	bool PrimeInMatrix(int matrix[N_max][N_max], int n);

	int LineSum(int matrix[N_max][N_max], int n, int j);

	void ReplaceLines(int matrix[N_max][N_max], int n, int i, int j);
}
