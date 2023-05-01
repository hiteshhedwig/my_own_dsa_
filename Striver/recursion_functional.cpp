#include <bits/stdc++.h>


// reverse an array using recursion
void reverse(int *arr, int start_idx, int end_idx) {
    if (start_idx >= end_idx) return;
    std::swap(arr[start_idx], arr[end_idx]);
    start_idx += 1;
    end_idx   -= 1;
    reverse(arr, start_idx, end_idx);   
}


int
main(){

    int a[5] = {1,2,3,4,5};
    int start_idx = 0;
    int end_idx   = 4;

    for (int i = 0; i < 5; i++) {
        std::cout << "original : " << a[i] << "\t";
    }

    std::cout << std::endl;

    reverse(a, start_idx, end_idx);

    std::cout << std::endl;

    
    for (int i = 0; i < 5; i++) {
        std::cout << "reversed : " << a[i] << "\t";
    }

    return 0;
}
