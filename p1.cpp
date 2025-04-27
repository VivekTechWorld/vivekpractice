#include <iostream>
#include <vector>
#include <algorithm> // Needed for std::sort if the vector isn't pre-sorted

/**
 * @brief Performs iterative binary search on a sorted vector.
 *
 * Binary search efficiently finds an item in a sorted array (or vector)
 * by repeatedly dividing the search interval in half.
 *
 * @param arr The sorted vector of integers to search within.
 * @param target The integer value to search for.
 * @return The index of the target element if found, otherwise -1.
 */
int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1; // Adjust to use 0-based indexing

    while (low <= high) {
        // Calculate mid index safely to prevent potential overflow
        int mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; // Target found
        }

        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Target was not found in the vector
    return -1;
}

int main() {
    // --- Example Usage ---

    // 1. Create a sorted vector (or sort an unsorted one)
    std::vector<int> numbers = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    // If it wasn't sorted, you'd use: std::sort(numbers.begin(), numbers.end());

    // 2. Choose a target value to search for
    int target_to_find = 23;
    int target_not_present = 40;

    // 3. Perform the search
    int index_found = binarySearch(numbers, target_to_find);
    int index_not_found = binarySearch(numbers, target_not_present);

    // 4. Print results
    if (index_found != -1) {
        std::cout << "Target " << target_to_find << " found at index: " << index_found << std::endl;
    } else {
        std::cout << "Target " << target_to_find << " not found in the vector." << std::endl;
    }

    if (index_not_found != -1) {
        std::cout << "Target " << target_not_present << " found at index: " << index_not_found << std::endl;
    } else {
        std::cout << "Target " << target_not_present << " not found in the vector." << std::endl;
    }

    return 0; // Indicate successful execution
}

// --- End of Code ---
// Total lines (including comments and blank lines for readability): ~70 lines
