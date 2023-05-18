
#include <bits/stdc++.h>

int main()
{
    int arr[] = {4,1,2,1,2} ;
    int n_size = sizeof(arr)/sizeof(arr[0]);
    
    int xorr=0;
    for (int i=0; i<n_size; i++) {
        xorr = xorr ^ arr[i];
    }


    std::cout << "once occured " << xorr << std::endl;

  return 0;
}