
#include <bits/stdc++.h>

int main()
{
    // int n = 4;
    // int arr[] = {1,2,4,5};

    // HEH, dont even need actual length of the original array.
    int n = 2;
    int arr[] = {1,3};

    //{1,2,4,5}
    // if you see above,
    // every adjacent element in the array is a odd number always
    // if its even, we can be sure some number is missing
    // so we just take an mid of the a[i] and a[i+1]

    // Find the missing number in an array
    for (int i = 0; i < n-1; i++) {
        if ((arr[i] + arr[i+1])%2 == 0) {
            int missing = (arr[i] + arr[i+1])/2;
            std::cout << missing << std::endl;
        }
    }


  return 0;
}