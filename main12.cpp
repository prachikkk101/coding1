#include<iostream>
#include<vector>
using namespace std;
vector<int> chk(vector<int>& arr){
    int n = arr.size();
    int j = 0;
    vector<int> temp(n);//creating an empty vector of same size n
    for(int i = 0 ; i<n ; i++){
        if(arr[i] != 0){//then  adding elements to the created vector which are non zero
            temp[j] = arr[i];
            j++;
        }
    }
    while(j < n){
        temp[j++] = 0;
    }
    for(int i = 0 ; i<n ; i++){
        arr[i] = temp[i];
    }
}
int main(){
    vector<int> arr = {1,2,3,0,4,5,0,6,0};
    chk(arr);
    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}

//{1,2,3,0,4,5,0,6,0}

//{1,2,3,4,5,6,0,0,0}