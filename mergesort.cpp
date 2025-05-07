#include <iostream>
#include <vector>
using namespace std;
//function to merge two sorted subarrays into one sorted array
void merge(vector<int>& arr, int left, int mid, int right) {
    //calculating the size of the two subarrays
    int n1 = mid - left + 1;
    int n2 = right - mid;

    //creating temporary arrays
    vector<int> Ltemp(n1);
    vector<int> Rtemp(n2);

    //copying the data to temporary arrays Ltemp[] and Rtemp[]
    for (int i = 0; i < n1; ++i)
        Ltemp[i] = arr[left + i];
    for (int j = 0; j < n2; ++j)
        Rtemp[j] = arr[mid + 1 + j];

    //merging the temporary arrays back into arr[left + right]
    int i = 0, j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (Ltemp[i] <= Rtemp[j]) {
            arr[k++] = Ltemp[i++];
        } else {
            arr[k++] = Rtemp[j++];
        }
    }

    //copy the remaining elements of Ltemp[], if exists
    while (i < n1)
        arr[k++] = Ltemp[i++];

    //copy the remaining elements of Rtemp[], if exists
    while (j < n2)
        arr[k++] = Rtemp[j++];
}

// function to perform merge sort on a subarray arr, recursive division basically
// after dividing the array, it calls itself recursively for both halves
void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right)
        return;

    //find the middle point
    int mid = left + (right - left) / 2;

    //sorting the first and second halves
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    //merging the sorted halves
    merge(arr, left, mid, right);
}

//function to print an array
void printArray(vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i)
        cout << arr[i] << " ";
    cout << std::endl;
}

int main() {
    int n;

    //Get the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    //Get the elements of the array
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Given array is : ";
    printArray(arr);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array is: ";
    printArray(arr);
    return 0;
}
