
#include <bits/stdc++.h>

int main()
{
    int n = 6, m = 3;
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {3,3,5}; 

    std::vector<int> out ;
    int idx_2 = 0;

    for (int i = 0; i < n; i++) {
        // keep two pointer track in arr1, arr2
        // if arr1 value is smaller than arr2, we need to update idx2
        // why ? becoz when arr1 idx is smaller than arr2 idx2. 
        // arr2 value is already been recorded.
        if (arr2[idx_2] < arr1[i]) {
            idx_2++;
        } 

        // if val in arr1, and arr2 are same then its intersection
        // and idx_2 needs to be smaller than arr2 length
        // once duplicated recorded, update idx_2 and find for next number
        if (idx_2 < m && arr1[i] == arr2[idx_2]) {
            std::cout << "intersection " << arr1[i] << std::endl;
            out.push_back(arr1[i]);
            idx_2+=1;
        }
    }

  return 0;
}