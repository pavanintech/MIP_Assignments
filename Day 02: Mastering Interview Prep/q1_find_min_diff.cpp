#include <iostream>
#include <climits>
using namespace std;

int partition(int* arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    for (int j = low+1; j <= high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i], arr[low]);
    return i;
}

void quickSort(int* arr, int low, int high) {
    if (low < high) {
        int pI = partition(arr, low, high);
        quickSort(arr, low, pI-1);
        quickSort(arr, pI+1, high);
    }
}

int main() {
    int n, m;
    cin >> n; 
    int* arr = new int[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> m;
    
    quickSort(arr, 0, n-1);
    
    cout << "Minimum Difference: " << arr[m-1] - arr[0] << endl;
    
    delete[] arr;
    return 0;
}
