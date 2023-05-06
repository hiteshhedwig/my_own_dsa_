#include <iostream>


int main()
{
    int arr[10] = {92,63,7,2,74,42,56,89,23,19};
    size_t size_arr = 10;

    // bubble sort

    // 1. swap adjacent elements
    // 2. keep swaping until last element is reached
    // repeat 1,2 steps until whole array is sorted
    // keep a boolean to see if swap happened in whole swap or not

    bool more_to_swap = true;
    while (more_to_swap) {
        int swapcount = 0;
        for (size_t i = 0; i < size_arr-1; i++) {
            if (arr[i] > arr[i+1]) {
                std::swap(arr[i], arr[i+1]);
                swapcount += 1;
            }
        }
        
        if (swapcount == 0) {
            break;
        }
    }

    std::cout << "sorted " << std::endl;
    for (size_t i = 0; i < size_arr; i++) {
        std::cout << arr[i] << " ";
    }


    return 0;
}