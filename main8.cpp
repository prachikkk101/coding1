#include<iostream>
#include<vector>
using namespace std;

vector<int> sortedchk(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    for(int i = 0; i < n; i++) {
       
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
            
                if(res.empty() || res.back() != arr[i]) {
                    res.push_back(arr[i]);
                }
                break;
            }
        }
    }
    return res;
}

int main() {
    vector<int> arr = {2, 2, 2, 3, 3};
    vector<int> res = sortedchk(arr);
    for(int x : res) {
        cout << x << " ";
    }
    return 0;
}
