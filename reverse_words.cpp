std::string reverse_words(std::string str)
{
    auto begin=str.begin();
    for (auto it = str.begin(); it != str.end(); it++) {
        if (*it ==' '){
            auto end = it;
            std::reverse(begin,end);
            begin = it+1;
        }
    }
    std::reverse(begin, str.end());
    return str;
}