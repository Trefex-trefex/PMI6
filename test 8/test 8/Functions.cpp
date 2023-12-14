#include <iostream>
#include <string>

std::string removeZeros(const std::string& str) {
    size_t nonZeroInd = str.find_first_not_of('0');

    if (nonZeroInd == std::string::npos) {
        return "0";
    }
    else {
        return str.substr(nonZeroInd);
    }
}