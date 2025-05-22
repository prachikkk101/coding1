#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& a, vector<int>& b) {
    vector<int> res;
    int i = 0, j = 0;

    while(i < a.size() && j < b.size()) {
        // Skip duplicates in 'a'
        if(i > 0 && a[i] == a[i - 1]) {
            i++;
            continue;
        }

        if(a[i] < b[j]) {
            i++;
        } else if(a[i] > b[j]) {
            j++;
        } else {
            res.push_back(a[i]);
            i++;
            j++;
        }
    }
    return res;
}

int main() {
    vector<int> a = {3, 5, 10, 10, 10, 15, 15, 20};
    vector<int> b = {5, 10, 10, 15, 30};
    vector<int> res = intersection(a, b);    
    for (int x : res) {
        cout << x << " ";
    }
}
