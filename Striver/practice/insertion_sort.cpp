#include <iostream>


int main()
{
    int arr[10] = {92,63,7,2,74,42,56,89,23,19};
    size_t size_arr = 10;

    // insertion sort

    // 1. start from 1st index.
    // 2. swap to the left most minimum possible number
    int n_swp = 1;
    while (n_swp < size_arr)
    {
        for (int i = n_swp; i < size_arr; i++) {
            int j = i-1;
            // vacant the space
            int temp = arr[i];
            while (j >= 0 && temp < arr[j]) 
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1] = temp;
            n_swp++;
        }
        
    }
    
    std::cout << "sorted " << std::endl;
    for (size_t i = 0; i < size_arr; i++) {
        std::cout << arr[i] << " ";
    }


    return 0;
}