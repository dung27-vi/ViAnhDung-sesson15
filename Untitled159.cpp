#include <iostream>
#include <vector>
#include <map>
#include <limits>

int findLeastFrequent(const std::vector<int>& arr) {
    if (arr.empty()) {
        // Handle empty array case
        return -1; // Or throw an exception
    }

    // Step 2: Count frequencies
    std::map<int, int> counts;
    }

    // Step 3: Find the minimum frequency
    int min_freq = std::numeric_limits<int>::max();

    // Step 4: Return the first element with the minimum frequency
        if (counts[num] == min_freq) {
            return num;
        }
    }
    
    return -1; // Should not reach here if array is not empty
}

int main() {
    std::vector<int> arr = {1, 3, 3, 2, 4, 2, 5};
    int least_frequent = findLeastFrequent(arr);
    std::cout << "The least frequent element is: " << least_frequent << std::endl;
    return 0;
}
