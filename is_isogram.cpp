// kata Isograms
int char_counter(std::string str, char what){
    int count=0;
    for(auto c:str){
        if(c == what){
            count++;
        }
    }
    return count;
}
bool is_isogram(std::string str) {
    std::string tempStr=str;
    std::string newStr="";

    for (int i=0; i<tempStr.size(); i++){
        tempStr[i]=tolower(tempStr[i]);
    }

    for (auto c:tempStr){
        if (char_counter(tempStr,c)==1){
            newStr.push_back(tolower(c));
        }
    }
    if ( newStr ==  tempStr){
        return true;
    } else{
        return false;
    }
}