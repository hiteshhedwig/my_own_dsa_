//Move all Zeros to the end of the array
#include <iostream>

void move_zeros_(int *arr, int size_arr) {

    //
    int j = 0;
    
    for (int i = 0; i < size_arr; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }

    for (int i = j+1; i < size_arr; i++)
    {
        if (arr[i] != 0) {
            std::cout << "swap " << i << " " << j << std::endl;

            std::swap(arr[i], arr[j]);
            j++;

            for (size_t i = 0; i < size_arr; i++) {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }
    }
    

}

int main() {
    //     Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
    //     Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
    int arr[8] = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int size_arr = 8;


    move_zeros_(arr, size_arr);

    for (size_t i = 0; i < size_arr; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}