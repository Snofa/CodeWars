//
// Created by Snofa on 25.06.2021.
//

#include <iostream>
#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
    std::vector<int> result = input;
    for (int i = 0; i < result.size(); ++i) {
        auto zero = std::find(begin(result), end(result), 0);
        if (zero != result.end()){
            result.erase(zero);
            result.push_back(0);
        }else
        {
            break;
        }
    }
    return  result;

}