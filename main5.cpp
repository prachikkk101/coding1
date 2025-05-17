#include<iostream>
#include<vector>
using namespace std;
vector<int> Largest(vector<int> arr){
    int fst = INT_MIN;
    int sec = INT_MIN,thd = INT_MIN;
    for(int x: arr){
        if(x > fst){
            thd = sec;
            sec = fst;
            fst = x;
        }

        else if(x > sec && x!= fst){
            thd = sec;
            sec = x;
        }
        else if(x > thd && x  != fst){
            thd = s;
        }

        vector<int> res = {};
        if(fst == INT_MIN){
            return res;
        }
        res.push_back(fst);
        if(sec == INT_MIN){
            return res;
        }
        res.push_back(sec);
        if(thd == INT_MIN){
            return res;
        }
        res.push_back(thd);
        return res;
    }


}
int main(){
    vector<int> arr = {12,13,1,10,34,1};

    vector<int> res = Largest(arr);

    for(int x: res){
        cout<<x<<" ";
    }
    cout<<endl;

    
    return 0;
}