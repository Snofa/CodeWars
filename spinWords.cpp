#include <iostream>
#include <c++/algorithm>



std::string spinWords(const std::string &str)
{   int count=0;
    std::string newStr = str;
    auto begin=newStr.begin();
    for (auto it = newStr.begin(); it != newStr.end(); it++) {
        count++;
        if (*it ==' '){
            auto end = it;
            if(count-1>=5){
                std::reverse(begin,end);
            }

            count=0;
            begin = it+1;
        }
    }
    if(count>=5)     std::reverse(begin, newStr.end());
    return newStr;
}