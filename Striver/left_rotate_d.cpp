// Example 1:
// Input: N = 7, array[] = {1,2,3,4,5,6,7} , d = 3
// Output: 4 5 6 7 1 2 3
// Explanation: The array is rotated to the left by 3 positions.

#include <iostream>

int main() {

    int arr[7] = {1,2,3,4,5,6,7} ;
    int left_rotate  = 3 ; 
    int size_arr = 7;

    // for (int j = 0 ; j < left_rotate ; j++) {
    //     int temp = arr[0] ;
    //     for (int i = 1 ; i < size_arr ; i++) { 
    //         arr[i-1] = arr[i] ;
    //     }
    //     arr[size_arr-1] = temp ;
    // }
    // rotate left
    int temp[left_rotate] ;
    for (int i = 0 ; i < left_rotate ; i++) { 
        temp[i] = arr[i] ;
    }

    for (int i = 0 ; i < size_arr ; i++) {
        arr[i] = arr[left_rotate+i] ;
    }

    for (int i = 0 ; i < left_rotate ; i++) { 
        arr[(left_rotate+i + 1)] = temp[i] ;
    }


    for (size_t i = 0; i < size_arr; i++) {
        std::cout << arr[i] << " ";
    }

    return 0 ;

}