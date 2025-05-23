#include <iostream>
#include <vector>
using namespace std;

int chk(vector<int>& arr) {
    int mid = arr.size() / 2;
    for (int i = 0; i < mid; i++) {
        for (int j = mid; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                return mid;
            }
        }
    }
    return 0;
}

int main() {
    vector<int> arr = {1, 2, 0, 3};
    int result = chk(arr);
    cout << result << endl;
    return 0;
}
