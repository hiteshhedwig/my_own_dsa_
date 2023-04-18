#include <iostream>


int main()
{
    int arr[7] = {64,34, 25 ,12, 22, 11, 90};
    int size_arr = 7;

    std::cout << "Unsorted \n" << std::endl;
    for (size_t i = 0; i < 7 ; i++) {
        std::cout << arr[i] << " \t " ;
    }

    std::cout << " \n"<<std::endl;

    // below insertion sort algorithm
    int start_idx ;
    for (start_idx= 1; start_idx<size_arr; start_idx++) {
        // init the start index
        auto temp = arr[start_idx];
        std::cout << "vacant the space " << arr[start_idx] << std::endl;
        auto j = start_idx-1;
        while (j>=0 && temp<arr[j]) {
            std::cout << "check previous sorted value " << temp << " & " << arr[j] << std::endl;
            std::cout << "assign " << arr[j+1] << " to " << arr[j] << std::endl;
            arr[j+1]=arr[j];
            j--;
        }
        

        std::cout << "increament space " << arr[j+1] << " to " << temp << std::endl;
        arr[j+1] = temp;

        std::cout << "\nsorted \n" << std::endl;
        for (size_t i = 0; i < size_arr ; i++) {
            std::cout << arr[i] << " \t " ;
        }
        std::cout << "\n" << std::endl;
    }
    
    std::cout << "\nsorted \n" << std::endl;
    for (size_t i = 0; i < size_arr ; i++) {
        std::cout << arr[i] << " \t " ;
    }


}
