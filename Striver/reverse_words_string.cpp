
#include <bits/stdc++.h>

int main()
{
    std::string test = "  hello world  ";

    std::string result;

    
    char space = ' ';
    std::reverse(test.begin(), test.end());

    std::string sentence = "";
    std::string word="";
    int spacecount = 0;
    bool string_found = false;
    for (int i = 0; i < test.size(); i++) {
        auto letter = test.at(i);
        // std::cout << letter << std::endl;
        if (letter == space) {
            spacecount+=1;
            continue;
        }
        if (spacecount > 0) {
            if (string_found) {
                std::reverse(word.begin(), word.end());
                sentence.append(word.c_str());
                sentence.push_back(space);
            } else {
                std::reverse(word.begin(), word.end());
                sentence.append(word.c_str());
            }
            word="";
            spacecount=0;
        }
        word.push_back(letter);
        string_found = true;
    }

    std::reverse(word.begin(), word.end());
    sentence.append(word.c_str());
    return 0;
}