#include<iostream>
#include<vector>
using namespace std;
int Largest(vector<int> &arr){
    int max = arr[0];
    for(int i = 0 ; i<arr.size(); i++){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}
int main(){
    vector<int> arr = {20,40,30,55};
    int res = Largest(arr);
    cout<<res;
    return 0;
}