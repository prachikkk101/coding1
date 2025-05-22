// C++ program to find union of two arrays

#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b) {
    vector<int> res;

    // Traverse through a[] and search every element
    // a[i] in result
    for (int i = 0; i < a.size(); i++) {

        // check if the element is already
        // in the result to avoid duplicates
        int j;
        for (j = 0; j < res.size(); j++)
            if (res[j] == a[i])
                break;
        if (j == res.size()) {
            res.push_back(a[i]);
        }
    }

    // Traverse through b[] and search every element
    // b[i] in result
    for (int i = 0; i < b.size(); i++) {

        // check if the element is already
        // in the result to avoid duplicates
        int j;
        for (j = 0; j < res.size(); j++)
            if (res[j] == b[i])
                break;
        if (j == res.size()) {
            res.push_back(b[i]);
        }
    }
    return res;
}

int main() {

    vector<int> a = {1, 2, 3, 2, 1};
    vector<int> b = {3, 2, 2, 3, 3, 2};

    vector<int> res = findUnion(a, b);

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}//union of two unsorted arrays