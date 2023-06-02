
#include <bits/stdc++.h>

int main()
{
    std::string res = "";
    std::vector<std::string> test = {"flower","flow","flight"};

    std::string ans="";
    std::sort(test.begin(),test.end());
    int n=test.size();
    std::string first=test[0],last=test[n-1];
    for(int i=0;i<std::min(first.size(),last.size());i++){
        if(first[i]!=last[i]){
            break;
        }
        ans+=first[i];
    }

    std::cout<<ans<<std::endl;

    return 0;
}