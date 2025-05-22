#include<iostream>
#include<vector>
using namespace std;
vector<int> chk(vector<int>& arr1,vector<int>& arr2){
    vector<int> res;
    int m = arr1.size();
    int n = arr2.size();
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j<n ; j++){
            while(arr1[i] != arr2[j]){
                res.push_back(arr1[i]);
                i++;
            }
            while(arr1[j] != arr2[i]){
                res.push_back(arr2[j]);
                j++;
            }
            while(arr1[i] == arr2[j]){
                res.push_back(arr1[i]);
                i++;
                j++;
            }
        }
    }
    return res;

}
int main(){
    vector<int> arr1 = {1,2,3,4,3,4,5};
    vector<int> arr2 = {5,6,5,7,8};
    vector<int> res = chk(arr1,arr2);
    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}