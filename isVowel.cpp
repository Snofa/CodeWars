bool isVowel(char c){
    std::vector<char> vowels={'a', 'e', 'i', 'o', 'u'};
    for (auto vowel:vowels){
        if (tolower(c) == vowel ){
            return true;
        }
    }
    return false;
}
int getCount(const std::string& inputStr){
    int num_vowels = 0;

    for(auto c:inputStr){
        if(isVowel(c)){
            num_vowels++;
        }

    }
    //return count_if(inputStr.begin(), inputStr.end(), isVowel); 
    return num_vowels;
}