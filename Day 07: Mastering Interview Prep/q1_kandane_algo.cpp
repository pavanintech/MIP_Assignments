#include <iostream>
using namespace std;

int kandaneAlgo(int* arr, int n) {
    int current = 0, max_sum = 0;
    
    for (int i = 0; i < n; i++) {
        current += arr[i];
        max_sum = max(max_sum, current);
        if (current < 0) {
            current = 0;
        }
    }
    
    return max_sum;
}

int main() {
    int n, *arr = nullptr;
    
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = kandaneAlgo(arr, n);
    cout << result << endl;
    
    delete[] arr;
    return 0;
}
