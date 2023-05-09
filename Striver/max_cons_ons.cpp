
#include <bits/stdc++.h>

int main()
{
    int prices[] = {1, 1, 0, 1, 1, 1} ;
    int n_size = sizeof(prices)/sizeof(prices[0]);
    int count = 0;
    int max   = -1 ;
    for (int i = 0; i < n_size ; i++) {
        if (prices[i] == 1) {
            count++;
        } else { 
            max = count;
            count = 0;
        }

        if (count > max) {
            max = count;
        }
    }

    std::cout << "max ones " << max << std::endl;

  return 0;
}