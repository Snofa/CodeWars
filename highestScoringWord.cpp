#include <string>
#include <map>

std::string highestScoringWord(const std::string &str)
{
    std::map<char,int > score;
    for (int digit = 1, c = 97; digit<=26; digit++,c++){
        score[(char) c ] = digit;
    }

    int countScore=0;
    int highestScoring=0;
    std::string highestWord="";
    auto begin=str.begin();
    auto beginWord = str.begin();
    auto end =str.begin();
    for (auto it = str.begin(); it != str.end(); it++){
        countScore+=score[*it];
        if (*it == ' '){
            if(countScore > highestScoring){
                end = it;
                beginWord = begin;
                highestScoring = countScore;
                countScore =0;
            }
            begin = it +1;
            countScore =0;
        }
    }
    if(countScore> highestScoring){
        end = str.end();
        beginWord = begin;
        highestScoring = countScore;
        countScore =0;
    }
    for(auto it =beginWord; it != end; it++){
        highestWord += *it;
    }
    return highestWord;
}