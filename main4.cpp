#include<iostream>
#include<vector>
using namespace std;
int SecondLargest(vector<int> arr){
    int max = arr[0];
    int max1 = arr[1];
    for(int i = 0 ; i<arr.size() ; i++){
        if(arr[i]>max) max = arr[i];
        if(max>arr[i]) max1 = arr[i];
    }
    return max1;
}
int main(){
    vector<int> arr = {20,40,30,55,70};
    int res = SecondLargest(arr);
    cout<<res<<endl;
    return 0;
}//to find the second largest element in an array