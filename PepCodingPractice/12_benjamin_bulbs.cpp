#include<iostream>
#include<algorithm>
#include<math.h>

// Benjamin Bulbs - Question | Java Foundation Course 

int
main() 
{

    // puzzles will have simple solution but hard process

    // int N_bulbs=20;
    int N_fluctuations = 100;

    // assuming all bulbs are off

    // improved method is pepcoding way 
    // so the idea is ; 
    // if a bulb is getting toggled by even number. They will remain OFF because ;  (first) ON - OFF - ON - OFF (last action)
    // if a bulb is getting toggled by odd number. They will remain ON.
    // now the point is, 
    // so bulb number will be toggled odd depending upon factors it has. For example if bulb four is being toggled it will be toggled 3 times. because it 4 can have 3 factors (1,2,4)/
    // these numbers will be perfect squares because they have 2n+1 factors
    // we just need to find perfect squares till N_fluctuations 

    for (int i=1; i*i<=N_fluctuations; i++) {
        std::cout << "Toggled ON " << i*i << std::endl;
    }
    

    return 0;

}