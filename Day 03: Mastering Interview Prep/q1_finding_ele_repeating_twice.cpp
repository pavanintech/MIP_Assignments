#include <iostream>
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
    int n;
    cin >> n; 
    int* arr = new int[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    quickSort(arr, 0, n-1);
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) {
            cout << "true" << endl;
            break;
        }
    }
    
    delete[] arr;
    return 0;
}
