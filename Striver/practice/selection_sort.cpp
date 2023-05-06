#include <iostream>


int main()
{
    int arr[10] = {92,63,7,2,74,42,56,89,23,19};
    size_t size_arr = 10;

    // selection sort

    // 1. find min in the list. 
    // 2. and replace it with the first element

    int sorted_index = 0;
    while (sorted_index < size_arr)
    {
        for (size_t i = sorted_index; i < size_arr; i++)
        {
          if (arr[i] < arr[sorted_index]) {
            std::swap(arr[i], arr[sorted_index]);
          }   
        }   
        sorted_index++;
    }

    std::cout << "sorted " << std::endl;
    for (size_t i = 0; i < size_arr; i++) {
        std::cout << arr[i] << " ";
    }
    

    return 0;
}