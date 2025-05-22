#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int>& arr){
    vector<int> reverse = arr;
    reverse(reverse.begin(),reverse.end());
    
}
int main(){
    return 0;
}