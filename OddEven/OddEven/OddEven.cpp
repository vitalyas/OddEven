#include <iostream>
#define N 15

void PrintOddOrEvenNumbers(int maxNumber, bool isOdd);

int main()
{
    PrintOddOrEvenNumbers(N, true);
    PrintOddOrEvenNumbers(N, false);
}

void PrintOddOrEvenNumbers(int maxNumber, bool isOdd)
{
    for (int i = 0; i < maxNumber + 1; i++)
    {
        bool isOddNumber = i % 2 == 0;

        if (isOdd && isOddNumber)
        {
            std::cout << i << " ";
        }
        else if (!isOdd && !isOddNumber)
        {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
}