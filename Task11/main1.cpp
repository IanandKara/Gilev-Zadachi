#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int *num = new int[n] ;

	for (int i = 0; i < n; i++)
		*(num + i) = rand();
    
	for (int i = 0; i < n; i++)
	{
		int k = *(num+i);
		while (k > 9)
			k /= 10;
		if (k == 1)
		{
			for (int i = 0; i < n - 1; i++)
				for(int j = i + 1; j < n; j++)
					if (*(num + i) > *(num + j))
					{
						int tmp = *(num + i);
						*(num + i) = *(num + j);
						*(num + j) = tmp;
					}
			break;
		}
	}


	for (int i = 0; i < n; i++)
		std::cout << *(num + i) << " ";

	delete[] num;
}
