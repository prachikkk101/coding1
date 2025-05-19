#include<iostream>
#include<vector>
#include<algorithm> // for sort
using namespace std;

bool isSorted(const vector<int>& arr) {
    vector<int> sortedArr = arr;      // Make a copy
    sort(sortedArr.begin(), sortedArr.end());  // Sort the copy

    return arr == sortedArr; // Compare original with sorted
}

int main() {
    vector<int> arr = {1, 2, 3, 4};  // Try changing this to test
    if (isSorted(arr)) {
        cout << "yes";
    } else {
        cout << "No";
    }
    return 0;
}
