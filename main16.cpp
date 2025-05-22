#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int chk(vector<int>& arr, int k) {
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] == arr[j] && abs(i - j) < k) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 4};  // Example input
    int k = 3;

    if(chk(arr, k)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}
