/*Excercise 1 (Basic input and output, arrays and pointers)
Write a program that first asks from the user how many numbers he needs.After that the
program allocates memory space to store those numbers(integer array).Next the program
fills the array with random numbers between 0 - 99, and the program displays all numbers
from the array.After that the program calculates the mean of the generated number
calling a separate function, int mean(int* array, int n).Finally the program must
free the memory space it allocated.

There is rand() function for generating random numbers.Limiting the range to[0, 99] is
done with rand() % 100. In order to use rand() function you must include cstdlib header.
*/



#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double mean(int* array, int n)
{
    int total = 0;
    for (int i = 0; i < n; ++i)
    {
        total += array[i];
    }

    return total / n;
}

int main()
{
    srand(time(NULL));

    int size = 0;
    cout << "How many numbers do you want?:" << " ";
    cin >> size;

    int* arr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 100;
    }

    cout << "Randomly generated numbers are: " << " ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl
        << "Average of the generated numbers is:" << " ";
    cout << mean(arr, size) << endl;

    delete[] arr;

    return 0;

    
}
