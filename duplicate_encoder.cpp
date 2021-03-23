std::string duplicate_encoder(const std::string& word){
    std::string newStr="";
    std::string copyStr=word;
    std::transform(copyStr.begin(),copyStr.end(), copyStr.begin(),::tolower);

    for(auto item:copyStr) {
        std::count(copyStr.begin(), copyStr.end(), item) > 1 ? newStr += ")"
                                                             : newStr += "(";
    }

    return newStr;
}
