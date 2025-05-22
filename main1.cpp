#include<iostream>
#include<vector>
using namespace std;
vector<int> getAlternate(vector<int> &arr){
    vector<int> res;

    for(int i = 0 ; i<arr.size() ; i +=2){
        res.push_back(arr[i]);
    }
    return res;
}
int main(){
    vector<int> arr = {10,30,50,44,86};
    vector<int> res = getAlternate(arr);
    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}