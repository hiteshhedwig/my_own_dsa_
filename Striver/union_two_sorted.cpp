// Union of Two Sorted Arrays

#include<bits/stdc++.h>

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,4,5};
    int size_arr = 5;

    // output : {1,2,3,4,5}

    std::set <int> output;

    // nO(logn)
    for (int i = 0; i < size_arr; i++) {
        output.insert(arr1[i]);
        output.insert(arr2[i]);
    }

    for (auto & val : output) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}