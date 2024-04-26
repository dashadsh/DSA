// gcc -std=c11 -o output 88.c

#include <stdio.h>

// some data is useless: nums1Size, nums2Size
// void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    
// }

void merge(int* nums1, int m, int* nums2, int n) {
    // begin from the end of nums1 and nums2 :
    int i = m - 1; // end of nums1
    int j = n - 1; // end of nums2
    int k = m + n - 1; // end of merged nums1
    
    // merge nums1 and nums2 into nums1
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }
    
    // add remaining elements from nums2 to nums1 if there are any
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int m = 3;
    int nums2[] = {2, 5, 6};
    int n = 3;
    
    // merge(nums1, 6, m, nums2, 3, n);
	merge(nums1, m, nums2, n);

    printf("Merged Array: ");
    for (int i = 0; i < m + n; ++i) {
        printf("%d ", nums1[i]);
    }
    printf("\n");
    
    return 0;
}