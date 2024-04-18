#include <iostream>
using namespace std;

int findMax(int nums[], int start, int end) {
    if (start == end)
        return nums[start];

    int mid = (start + end) / 2;
    int max1 = findMax(nums, start, mid);
    int max2 = findMax(nums, mid + 1, end);

    return (max1 > max2) ? max1 : max2;
}

int findMin(int nums[], int start, int end) {
    if (start == end)
        return nums[start];

    int mid = (start + end) / 2;
    int min1 = findMin(nums, start, mid);
    int min2 = findMin(nums, mid + 1, end);

    return (min1 < min2) ? min1 : min2;
}

int main() {
    int n, i;
    cout << "Enter the size of an array: ";
    cin >> n;
    int nums[n];
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int max = findMax(nums, 0, n - 1);
    int min = findMin(nums, 0, n - 1);

    cout << "Maximum Element: " << max << endl;
    cout << "Minimum Element: " << min << endl;

    return 0;
}


