#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    unordered_map<int, int> num_map; // To store number and its index
    
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        
        if (num_map.find(complement) != num_map.end()) {
            // If complement exists in map, return the indices
            vector<int> result;
            result.push_back(num_map[complement]);
            result.push_back(i);
            return result;
        }
        
        // Store the index of the current number
        num_map[nums[i]] = i;
    }
    
    // If no solution is found, return an empty vector
    return vector<int>();
}

int main() {
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}
