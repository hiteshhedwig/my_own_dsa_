
#include <bits/stdc++.h>

int main()
{
    bool rotated = false;
    std::string string = "abcde";

    std::string goal = "cdeab";

    for (int i = 0; i < string.size(); i++) {
        if (string == goal){
            rotated = true;
        }
        auto str = string[0];
        // std::cout << "Extracted " << str << std::endl;
        string = string.substr(1,string.length()-1);
        // std::cout<<"Add " << str << " to " << string<< std::endl;
        string.push_back(str);
        // std::cout << string << std::endl;
    }

    // std::cout << "Rotated ? " << rotated << std::endl;

    return 0;
}