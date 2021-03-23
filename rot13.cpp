std::string rot13(std::string msg)
{
    std::string newStr ="";
    for(auto item:msg){
        if (item >= 'a' && item <= 'm') {
            item += 13;
        } else if (item >= 'n' && item <= 'z') {
            item -= 13;
        } else if (item >= 'A' && item <= 'M') {
            item += 13;
        } else if (item >= 'N' && item <= 'Z') {
            item -= 13;
        }
        newStr +=item;
    }
    return newStr;
}

