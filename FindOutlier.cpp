int FindOutlier(std::vector<int> arr)
{
    int resultOne=0;
    int resultTwo=0;
    int countOne=0, countTwo=0;
    for(auto item:arr){
        if(item%2 == 0 ){
            countOne++;
            resultOne=item;
        }else{
            countTwo++;
            resultTwo=item;
        }

    }
    if(countOne<countTwo){
        return resultOne;
    }else {
        return resultTwo;
    }

//    for (auto a : arr)
//        a % 2 == 0 ? (evenCount++, even = a) : (oddCount++, odd = a);
//
//    return evenCount < oddCount ? even : odd;


}