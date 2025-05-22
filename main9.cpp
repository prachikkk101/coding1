#include<iostream>
#include<vector>
using namespace std;
vector<int> subarrays(vector<int>& arr){
    vector<int> res;
    for(int i = 0 ; i<arr.size() ; i++){
        for(int j = i+1 ; j<arr.size() ; j++){
            for(int k = i ; k<=j ; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}   
int main(){
    vector<int> arr = {1,2,3,4,5};
    subarrays(arr);
    return 0;
}