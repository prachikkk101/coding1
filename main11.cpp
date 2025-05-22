#include<iostream>
#include<vector>
using namespace std;
void rotateAee(vector<int>& arr,int d){
    int n = arr.size();
    for(int i = 0 ; i<d ; i++){
        int last = arr[n-10];
        for(int j = n - 1 ; j>0 ; j--){
            arr[j] == arr[j - 1];
        }
        arr[0] = last;
    }
}
int main(){
    return 0;
}