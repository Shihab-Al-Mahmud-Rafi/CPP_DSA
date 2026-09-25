//qn no. 1207
//Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

// #include <vector>
// #include <unordered_map>

// bool uniqueOccurrences(std::vector<int>& arr) {
//     std::unordered_map<int, int> counts;
//     for (int num : arr) {
//         counts[num]++;
//     }

//     // Bitmask set (supports frequencies up to 63)
//     unsigned long long freq_mask = 0;

//     for (const auto& [val, freq] : counts) {
//         unsigned long long bit = 1ULL << freq;
        
//         if (freq_mask & bit) {
//             return false; // Frequency collision detected
//         }
        
//         freq_mask |= bit; // Register frequency
//     }

//     return true;
// }