// kata Sum of two lowest positive integers
long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    int minOne=0,minTwo=0;
    std::vector<int> number = numbers;
    std::sort(number.begin(),number.end());
    std::reverse(number.begin(), number.end());
    minOne=number.at(number.size()-1);
    number.pop_back();
    minTwo=number.at(number.size()-1);
    return minOne+minTwo;
}