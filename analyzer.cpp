#include <vector>
#include <string>
#include <iostream>
#include <string>
#include "StringData.h" // didn't commit, wasn't authored by me

int binary_search(std::string& element, std::vector<std::string>& container) {
    int lower = 0;
    int upper = container.size() - 1;
    while(lower <= upper) {
        int mid = (lower + upper) / 2;
        if (container[mid] < element)
            lower = mid + 1;
        else if (container[mid] > element)
            upper = mid - 1;
        else
            return mid;
    };
    return -1;
}

int linear_search(std::string& element, std::vector<std::string>& container) {
    for(int i{ 0 }; i < container.size(); ++i) {
        if (container[i] == element)
            return i;
    }
    return -1;
}

int main() {
    std::vector<std::string> container = getStringData();
    std::string element;
    int index;
    std::chrono::system_clock::time_point begin;
    std::chrono::duration<double> elapsed;
    
    // binary not_here
    begin = std::chrono::system_clock::now();
    element = "not_here";
    binary_search(element, container);
    elapsed = std::chrono::system_clock::now() - begin;
    std::cout << "Binary - " << element << " - " << index << " - " << elapsed.count() << " seconds.\n";

    // linear not_here
    begin = std::chrono::system_clock::now();
    element = "not_here";
    linear_search(element, container);
    elapsed = std::chrono::system_clock::now() - begin;
    std::cout << "Linear - " << element << " - " << index << " - " << elapsed.count() << " seconds.\n";

    // binary mzzzz
    begin = std::chrono::system_clock::now();
    element = "mzzzz";
    binary_search(element, container);
    elapsed = std::chrono::system_clock::now() - begin;
    std::cout << "Binary - " << element << " - " << index << " - " << elapsed.count() << " seconds.\n";

    // linear mzzzz
    begin = std::chrono::system_clock::now();
    element = "mzzzz";
    linear_search(element, container);
    elapsed = std::chrono::system_clock::now() - begin;
    std::cout << "Linear - " << element << " - " << index << " - " << elapsed.count() << " seconds.\n";

    // binary aaaaa
    begin = std::chrono::system_clock::now();
    element = "aaaaa";
    binary_search(element, container);
    elapsed = std::chrono::system_clock::now() - begin;
    std::cout << "Binary - " << element << " - " << index << " - " << elapsed.count() << " seconds.\n";

    // Linear aaaaa
    begin = std::chrono::system_clock::now();
    element = "aaaaa";
    linear_search(element, container);
    elapsed = std::chrono::system_clock::now() - begin;
    std::cout << "Linear - " << element << " - " << index << " - " << elapsed.count() << " seconds.\n";
    return 0;
}