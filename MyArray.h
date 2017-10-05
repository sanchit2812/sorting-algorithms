#ifndef MYARRAY_H_INCLUDED
#define MYARRAY_H_INCLUDED
#include <iostream>

class MyArray
{
    private:
        int arr_size = 0;
        int *arr;
        char order;
        char algorithm;

        void generate_array()
        {
            /*
                1. Crescent
                2. Decrescent
                3. Random
            */
            arr = new int[arr_size];
            switch (order)
            {
                case '1':
                    for (int i = 0; i < arr_size; i++)
                        arr[i] = i;
                    break;
                case '2':
                    for (int i = arr_size - 1; i >= 0; i--)
                        arr[i] = arr_size - 1 - i;
                    break;
                case '3':
                    break;
            }
        }


    public:
        MyArray(int a_size, char ord, char alg)
        {
            arr_size = a_size;
            order = ord;
            algorithm = alg;

            generate_array();
        }

        ~MyArray()
        {
            delete arr;
        }

        void sort_array()
        {
            /*
                1. Bubble Sort
            */
        }

};

#endif // MYARRAY_H_INCLUDED
