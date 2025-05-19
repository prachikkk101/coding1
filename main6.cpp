#include<iostream>
#include<vector>
using namespace std;

vector<int> leaders(vector<int>& arr){
    vector<int> res;
    int n = arr.size();

    for(int i = 0 ; i < n ; i++){
        int j;
        for(j = i+1 ; j < n ; j++){
            if(arr[i] < arr[j]){ // Fixed comparison
                break;
            }
        }
        if(j == n){
            res.push_back(arr[i]);
        }
    }
    return res; // Added return statement
}

int main(){
    vector<int> arr = {15, 17, 4, 3, 5, 3};
    vector<int> result = leaders(arr);
    for(int res : result){
        cout << res << " ";
    }
    return 0;
}
