#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> &arr,int n){
    for(int i = 0 ; i<arr.size() ; i++){
        if(arr[i]==n){
            return i;
        }
        return -1;
    }
}
int main(){
    vector<int> arr = {10,20,46,78};
    int n = 46;
    int res = search(arr,n);
    cout<<res<<endl;
    return 0;
}