#include <iostream>
#include <climits>
using namespace std;

int main() {
    int mn = INT_MAX, mx = INT_MIN;
    int n;
    cout << "Enter Size: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (mn > arr[i]) {
            mn = arr[i];
        }
        if (mx < arr[i]) {
            mx = arr[i];
        }
    }
    
    cout << "Min Value: " << mn << endl;
    cout << "Max Value: " << mx << endl;
    
    delete[] arr;
    return 0;
}
