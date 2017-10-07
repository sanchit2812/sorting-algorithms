#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED

void bubble_sort(int* & arr, int arr_size)
{
    bool changed = true;
    int top = arr_size;

    while(changed == true)
    {
        changed = false;
        for(int i = 0; i < top - 1 ; i++)
        {
            if(arr[i] > arr[i+1])
            {
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                changed = true;
            }
        }
        top--;
    }
}

void insertion_sort(int* & arr, int arr_size)
{
    for(int sorted_i = 1; sorted_i < arr_size; sorted_i++)
    {
        int j = sorted_i;
        while(j > 0 && arr[j] < arr[j-1])
        {
            int tmp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = tmp;
            j--;
        }
    }
}
#endif // ALGORITHMS_H_INCLUDED
