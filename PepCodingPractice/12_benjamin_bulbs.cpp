#include<iostream>
#include<algorithm>
#include<math.h>

// Benjamin Bulbs - Question | Java Foundation Course 

int
main() 
{

    int N_bulbs=20;
    int N_fluctuations = 20;

    int bulb_state[N_bulbs];

    // set bulb state to off
    for (int i=0; i<N_bulbs; i++){
        bulb_state[i]= 0;
    }

    // initially every bulb was off
    for (int j=1; j<=N_fluctuations; j++) {
        for (int i=1; i<=N_bulbs; i++) {
            // change the multiple of j
            if (i%j == 0) {
                bulb_state[i-1]= !bulb_state[i-1];
            }
            if ((j == N_fluctuations) && (bulb_state[i-1] == 1)) {
                std::cout << "bulb ON " << i << std::endl;
            }
        }   
    }
    
    

    return 0;

}