#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include "Timer.h"
#include "MyArray.h"

using namespace std;

int main()
{
    //Enter the size of the array

    int array_size = 0;

    cout << "Enter the size of the array: ";

    cin >> array_size;

    //Choose how it is sorted (crescent, decrescent, randomly)

    char sorting;

    cout << "\nChoose how it is sorted:\n"
         << "1. Crescent\n"
         << "2. Decrescent\n"
         << "3. Random\n"
         << "-> ";

    cin >> sorting;

    //Choose the sorting algorithm

    char algorithm;

    cout << "\nChoose the sorting algorithm:\n"
         << "1. Bubble Sort\n"
         << "2. Insertion Sort\n"
         << "-> ";

    cin >> algorithm;

    //Generate array

    MyArray arr(array_size, sorting, algorithm);

    //Sort and calculate time spent on sorting

    Timer timer;

    timer.start();

    arr.sort_array();

    timer.stop();

    cout << "\nTotal time: " << timer.total() << " ms" << endl;

    return 0;
}


