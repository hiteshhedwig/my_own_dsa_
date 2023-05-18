
#include <bits/stdc++.h>

void find_num(int *arr, int to_find, int start, int end, int mid) {
    while(start < end) {
        std::cout << arr[start] << " " << arr[end] <<  " "<< arr[mid]<< std::endl;
        if (arr[mid] < to_find) {
            std::cout << "found greater " << arr[mid] << " > " << to_find << std::endl;
            start = mid + 1;
        }
        if (arr[mid] > to_find) {
            std::cout << "found less " << arr[mid] << " < " << to_find << std::endl;
            end = mid - 1;
        }
        if (arr[mid] == to_find) {
            std::cout << "found it ! breaking out " << mid << std::endl;
            break;
        }
        mid = (start + end)/2;
    }
}

int find_recursion(int *arr, int to_find, int start, int end, int mid) {
    std::cout << arr[start] << " " << arr[end] <<  " "<< arr[mid]<< std::endl;
    // std::cout << start << " " << end <<  " "<< mid<< std::endl;
    if (start > end) return -1;
    mid = (start + end)/2;
    if (arr[mid] == to_find) { std::cout << "FOUND! returning" << std::endl ; return mid; }
    if (arr[mid] > to_find) {
        return find_recursion(arr, to_find, start, mid-1, mid);
    } else {
        return find_recursion(arr, to_find, mid+1, end, mid);
    }
}

int main()
{
    int nums[] = {2,3,7,10,13,14,17} ;
    int n_size = sizeof(nums)/sizeof(nums[0]);

    int start = 0;
    int end = n_size-1;
    int mid = (start + end)/2;

    int find = 14;

    // without recursion:
    // find_num(nums, find, start, end, mid);

    // with recursion:
    auto ans = find_recursion(nums, find, start, end, mid);
    std::cout << ans << std::endl;
  return 0;
}