//  kata "Delete occurrences of an element if it occurs more than n times"
int counter(std::vector<int> arr, int what){
    int count=0;
    for(auto item:arr){
        if(item == what){
            count++;
        }
    }
    return count;
}

std::vector<int> deleteNth(std::vector<int> arr, int n)
{
    std::vector<int> newArr={};
    std::vector<int> temp={};
    for (auto item:arr) {
        if(counter(arr,item)>n){
            if(counter(temp,item)<n){
                temp.push_back(item);
                newArr.push_back(item);
            }
        } else{
            newArr.push_back(item);
        }

    }
    return newArr;
}