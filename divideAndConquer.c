#include <stdio.h>

int find_majority_element(int arr[], int n, int left, int right) {
    if (left == right) {
        return arr[left];
    }
    
    int mid = left + (right - left) / 2;
    int left_majority = find_majority_element(arr, n, left, mid);
    int right_majority = find_majority_element(arr, n, mid + 1, right);
    
    if (left_majority == right_majority) {
        return left_majority;
    }
    
    int left_count = 0;
    int right_count = 0;
    
    for (int i = left; i <= right; i++) {
        if (arr[i] == left_majority) {
            left_count++;
        } else if (arr[i] == right_majority) {
            right_count++;
        }
    }
    
    if (left_count > (right - left + 1) / 2) {
        return left_majority;
    } else if (right_count > (right - left + 1) / 2) {
        return right_majority;
    } else {
        return -1;  // Not found, should not happen
    }
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int majority_element = find_majority_element(arr, n, 0, n - 1);
    printf("Majority element: %d\n", majority_element);
    return 0;
}
