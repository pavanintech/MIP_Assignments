#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int left = 0, right = n - 1;
    
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        
        left++;
        right--;
    }
}

void printArray(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 4, 3, 2, 6, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 5, 1, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Original array 1: ";
    printArray(arr1, n1);
    reverseArray(arr1, n1);
    cout << "Reversed array 1: ";
    printArray(arr1, n1);

    cout << "Original array 2: ";
    printArray(arr2, n2);
    reverseArray(arr2, n2);
    cout << "Reversed array 2: ";
    printArray(arr2, n2);

    return 0;
}
