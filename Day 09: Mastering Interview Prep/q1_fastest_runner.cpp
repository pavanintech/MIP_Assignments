#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int quickSelect(vector<int>& nums, int left, int right, int k) {
    int pivot = nums[right];
    int partitionIndex = left;

    for (int i = left; i < right; i++) {
        if (nums[i] <= pivot) {
            swap(nums[i], nums[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(nums[partitionIndex], nums[right]);

    if (partitionIndex == k) return nums[partitionIndex];
    else if (partitionIndex < k) return quickSelect(nums, partitionIndex + 1, right, k);
    else return quickSelect(nums, left, partitionIndex - 1, k);
}

int findKthSmallest(vector<int>& nums, int k) {
    return quickSelect(nums, 0, nums.size() - 1, k - 1);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> times(n);
        for (int i = 0; i < n; i++) {
            cin >> times[i];
        }
        cout << findKthSmallest(times, k) << endl;
    }
    return 0;
}
