int minAbsSumPair(vector<int>& arr) {
  
    // Initialize the result with the sum 
    // of the first two elements
    int res = arr[0] + arr[1];

    // Consider every pair, find its sum and
    // update result if we get a smaller value
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            int sum = arr[i] + arr[j];
            if (abs(sum) < abs(res)) {
                res = sum;
            }
            
            else if(abs(sum) == abs(res)) {
                res = max(res, sum);
            }
        }
    }
    return res;
}

int main() {
    vector<int> arr = { 0, -8, -6, 3 };
    cout << minAbsSumPair(arr);
    return 0;
}//min pair whose sum is closest to zero
