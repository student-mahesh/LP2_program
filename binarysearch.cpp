#include <iostream>
#include <vector>

// Binary search function
int binarySearch(const std::vector<int>& array, int target) {
    int left = 0;
    int right = array.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == target) {
            return mid; // Element found, return its index
        } else if (array[mid] < target) {
            left = mid + 1; // Target is in the right half
        } else {
            right = mid - 1; // Target is in the left half
        }
    }

    return -1; // Element not found
}

int main() {
    // Get user input for array size and elements
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::vector<int> sortedArray(n);
    std::cout << "Enter the sorted elements of the array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> sortedArray[i];
    }

    // Get user input for the target value
    int target;
    std::cout << "Enter the target value to search: ";
    std::cin >> target;

    // Perform binary search
    int result = binarySearch(sortedArray, target);

    // Display the result
    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found in the array" << std::endl;
    }

    return 0;
}
