#include <iostream>

int main()
{
    std::cout << "Task 6_1" << std::endl;

    int const N_max = 100;
    int n, ans1{ 1 }, min{ 0 }, ans2{ -1 };
    std::cin >> n;
    int A[N_max];
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> A[i];
        if (A[i] > ans2)
        {
            ans2 = A[i];
        }
    }


    for (int i = 0; i < n; i++)
        if (A[i] % 10 == 2 || A[i] % 10 == 4)
        {
            ans1 = ans1 * A[i];          
            if (A[i] < ans2)
            {
                ans2 = A[i];
                min = i+1;
            }
        }


    if (ans1 == 1)
    {
        std::cout << "No right numbers";
    }
    else
    {
        std::cout << ans1 << "    min. number A[" << min << "] = " << ans2;
    }
}
