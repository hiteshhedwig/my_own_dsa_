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

    // below bubble sort algorithm
    int i,j;
    
    /* code */
    for (i = 0; i < size_arr; i++) {
        for (j = 0; j < size_arr - 1; j++) {
            std::cout << "comparing with " << arr[j] << " & " << arr[j+1] << std::endl; 
            if (arr[j]>arr[j+1]) {
                auto temp=arr[j+1];
                arr[j+1]=arr[j];    
                arr[j] = temp;
                std::cout << "swapped : " << arr[j+1] << " to " << arr[j] << std::endl;
            
                std::cout << "partial sorted \n" << std::endl;
                for (size_t i = 0; i < size_arr ; i++) {
                    std::cout << arr[i] << " \t " ;
                }
                std::cout << "\n" ;
            }
        }  
    }


    
    
    std::cout << "\nsorted \n" << std::endl;
    for (size_t i = 0; i < size_arr ; i++) {
        std::cout << arr[i] << " \t " ;
    }


}
