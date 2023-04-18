#include <iostream>


int main()
{
    int arr[10] = {92,63,7,2,74,42,56,89,23,19};
    size_t size_arr = 10;

    std::cout << "Unsorted \n" << std::endl;
    for (size_t i = 0; i < 10 ; i++) {
        std::cout << arr[i] << " \t " ;
    }

    std::cout << " \n"<<std::endl;

    // below selection sort algorithm
    int sorted_index = 0 ;
    while (sorted_index < 10) 
    {
        /* code */
        auto smallest_num = arr[sorted_index];
        for (size_t i = sorted_index; i < 10 ; i++) {
            if (arr[i] < smallest_num){
                smallest_num = arr[i];
                std::cout << "swapping " << arr[i] << " to " << arr[sorted_index] << std::endl;
                // swapping
                auto temp=arr[i];
                arr[i]=arr[sorted_index];    
                arr[sorted_index] = temp;
            }
        }
        sorted_index+=1;
    }
    
    std::cout << "\nsorted \n" << std::endl;
    for (size_t i = 0; i < 10 ; i++) {
        std::cout << arr[i] << " \t " ;
    }


}
