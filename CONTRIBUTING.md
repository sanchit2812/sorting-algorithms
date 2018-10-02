# Instructions to Add new sorting techniques to this Repository

Lets say you want to add `X sort` in this repository

## changes in Algorithms.h
Add the following line to Algorithms.h

`//=====X sort====`

-- Add the code for `X sort` here --

Add the following line

`//===============`

## changes in main.cpp
Add the following line to main.cpp (cout << part)
`<< "n. X Sort\n"`
where n is next index that will follow

## changes in MyArray.cpp
in sort_array(), add another case
`case '6':
                    heap_sort(arr,arr_size);
                    break;`
(with proper indentation)

Before making the pull request, make sure to remove a.out file (if there is one)
