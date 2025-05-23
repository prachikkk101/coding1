#include<iostream>
#include<vector>
using namespace std;
vector<int> chk(int k , vector<int>& arr){
    vector<int> res;
    for(int i = 0 ; i<arr.size() ; i++){
        for(int j = i + 1 ; j<arr.size() ; j++){
            if(arr[i] + arr[j] == k){
                res.push_back(arr[i]);
                res.push_back(arr[j]);
            }
        }
    }
    return res;
}
int main(){
    int k = 3;
    vector<int> arr = {1,3,4,2,5,6};
    vector<int> res = chk(k,arr);
    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}
