#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include "Timer.h"

int create_array(int,char);

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

    //Generate array

    //Sort and calculate time spent on sorting

    Timer timer;

    timer.start();

    /*insert here the sorting method*/

    timer.stop();

    cout << "Total time: " << timer.total() << " seconds" << endl;

    return 0;
}

int create_array(int array_size, char order)
{
    int *arr = new int[array_size];

    delete arr;
}


