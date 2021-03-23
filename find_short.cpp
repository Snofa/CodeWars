// kata Shortest Word
int find_short(std::string str)
{   int count=0;
    int min=INT_MAX;
    auto begin=str.begin();
    for (auto it=str.begin();it!=str.end();it++){
        if(*it !=' '){
            count++;
            begin=it+1;
        } else {
            if (count<min){
                min = count;
            }
            count=0;
        }
    }
    for (auto it=begin;it!=str.end();it++){
        count++;
    }
    if(count<min){
        min=count;
    }
    return min;
}