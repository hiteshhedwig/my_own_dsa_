//Move all Zeros to the end of the array
#include <iostream>

void move_zeros_(int *arr, int size_arr) {

    // better way
    // put non zero in the temp array and count how many zeroes are there, so that we have maintained order
    // now another non nested loop to reinit the temp array into arr and reinit zero count after the loop ends
    int count_zeros = 0;
    for (int i = 0; i < size_arr; i++) {
        if (arr[i] == 0) {
            count_zeros++;
        }
    }

    std::cout << "count_zeros: " << count_zeros << std::endl;

    int temp[size_arr-count_zeros] ;

    int j=0;
    for (int i = 0; i < size_arr; i++) {
        if (arr[i] != 0) {
            temp[j] = arr[i];
            std::cout << arr[i] << " with " << temp[j] << std::endl;
            j++;
        }
    }

    for (int k = 0; k < size_arr-count_zeros; k++) {
        std::cout << temp[k] << " ";
    }
    std::cout << std::endl;

    std::cout << "temp: " << size_arr-count_zeros << std::endl;

    for (int i = 0; i < size_arr; i++) {
        if (i < (size_arr-count_zeros)) {
            arr[i] = temp[i];
        } else {
            arr[i] = 0;
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