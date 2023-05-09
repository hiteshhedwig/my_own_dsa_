
#include <bits/stdc++.h>

int main()
{
    int arr[] = {4,1,2,1,2} ;
    int n_size = sizeof(arr)/sizeof(arr[0]);
    
    // we can use hashmaps
    std::unordered_map<int, int> uq;
    for (int i = 0; i < n_size; i++) {
        uq[arr[i]] += 1;
    }

    int once=0;
    for (auto x : uq) {
        if (x.second == 1) {
            once = x.first;
        }
        // uq.insert({arr[i], 0});
    }
    std::cout << "once occured " << once << std::endl;

  return 0;
}