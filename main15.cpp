#include<iostream>
#include<vector>
#include<algorithm>  
using namespace std;

vector<int> chk(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    vector<int> res;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] == arr[j]) {  
                res.push_back(arr[i]);
                break; 
            }
        }
    }
    return res;
}

int main() {
    vector<int> arr = {1,2,3,2,4,3,4,5};
    vector<int> res = chk(arr);
    for(int x : res) {
        cout << x << " ";
    }
    return 0;
}
