#include <iostream>

int main()
{
    std::cout << "Task 6_2" << std:: endl;

    int N, N_max{ 0 };
    std::cin >> N;


    if (N < 1000000000)
    {
        while (N != 0)
        {
            if (N % 10 > N_max)
            {
                N_max = N % 10;
            }

            N = N / 10;

            if (N_max == 9)
            {
                break;
            }
        }

        std::cout << "Max. number in N = " << N_max;
    }
    else
    {
        std::cout << "Too big N";
    }
}
