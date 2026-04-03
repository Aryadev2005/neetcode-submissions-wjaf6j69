class Solution {
public:
    // 1. The Merge helper function
    void merge(vector<int>& arr, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        // Temporary vectors
        vector<int> L(n1), R(n2);

        for (int i = 0; i < n1; i++) L[i] = arr[left + i];
        for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = left; // k starts at 'left'

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        // Copy remaining elements
        while (i < n1) {
            arr[k] = L[i];
            i++; k++;
        }
        while (j < n2) {
            arr[k] = R[j];
            j++; k++;
        }
    }

    // 2. The Recursive Sort function
    void mergeSort(vector<int>& arr, int left, int right) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }

    // 3. Main entry point
    vector<int> sortArray(vector<int>& nums) {
        if (nums.empty()) return nums;
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};