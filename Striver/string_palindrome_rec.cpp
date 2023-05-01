#include <bits/stdc++.h>


// check palindrome of a string
bool check_palindrome(const char *str, int start_idx, int end_idx) {
    std::cout << "Started check palindrome " << start_idx << " " << end_idx << std::endl;

    if ((start_idx > end_idx)) {
        return true;
    }
    if (str[start_idx]!=str[end_idx]) {
        return false;   
    }    
    return check_palindrome(str, start_idx+1, end_idx-1); 
    
}

int 
get_string_size(const char * str)
{
    int Size = 0;
    while (str[Size] != '\0') Size++;
    return Size;
}


int
main(){

    auto string = "madam";
    int size = get_string_size(string);
    int start_idx = 0;
    int end_idx = size-1;
    for (int i = 0; i < size; i++) {
        std::cout << "ch " << string[i] << std::endl;   
    }

    bool sucess = check_palindrome(string, start_idx, end_idx);

    std::cout << sucess << std::endl;

    return 0;
}
