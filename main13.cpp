#include<iostream>
#include<vector>
using namespace std;
//Binary Search Algorithm
vector<int> binarySearch(vector<int>& arr,int key,int low,int high){
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }

    }
    return -1;
}
int main(){
    
    return 0;
}