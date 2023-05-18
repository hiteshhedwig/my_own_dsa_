#include <iostream>

void conquer(int *arr, int start_index, int mid, int end_index) {
   int merged[end_index - start_index + 1]; 
   int idx1 = start_index;
   int idx2 = mid+1;
   int x    = 0;

   while()
}

void divide(int *arr, int start_index, int end_index, int n_size) {
    if (start_index >= end_index) return;

    auto mid = start_index + (end_index - start_index)/2;
    // divide 
    divide(arr, start_index, mid, n_size);
    divide(arr, mid+1,end_index, n_size);

    // conquer
    conquer(arr, start_index, mid, end_index);
}


int main()
{
    int arr[10] = {92,63,7,2,74,42,56,89,23,19};
    size_t size_arr = 10;

    std::cout << "Unsorted \n" << std::endl;
    for (size_t i = 0; i < 10 ; i++) {
        std::cout << arr[i] << " \t " ;
    }

    divide(arr, 0, size_arr-1, size_arr);

    std::cout << " \n"<<std::endl;
   
    std::cout << "\nsorted \n" << std::endl;
    for (size_t i = 0; i < 10 ; i++) {
        std::cout << arr[i] << " \t " ;
    }


}
