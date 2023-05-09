
#include <bits/stdc++.h>

int main()
{
    int n = 6, m = 3;
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {3,3,5}; 

    std::vector<int> out ;
    int idx_2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr2[idx_2] < arr1[i]) {
            idx_2++;
        } 
        if (idx_2 < m && arr1[i] == arr2[idx_2]) {
            std::cout << "intersection " << arr1[i] << std::endl;
            out.push_back(arr1[i]);
            idx_2+=1;
        }
    }

  return 0;
}