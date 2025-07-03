#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;
using namespace chrono;

void generateRandomNumbers(vector<int> &arr, int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr.push_back(rand() % 1000);
    }
}

void displayArray(vector<int> arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}


int partition(vector<int> &arr, int st, int end) {
    int idx = st-1, pivot =arr[end];

    for (int j=st;j<end;j++) {
        if (arr[j] <= pivot) {
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}

void quickSort(vector<int> &arr, int st, int end) {
    if (st < end) {
       int pvtIdx = partition(arr,st,end);
        quickSort(arr,st,pvtIdx-1);
        quickSort(arr,pvtIdx+1,end);
    }
}

void merge(vector<int> &arr,int st,int mid,int end) {
    vector<int> temp;
    int i = st , j = mid+1;

    while (i <=mid && j<=end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i<=mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while (j<=mid) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx=0;idx<temp.size();idx++) {
        arr[idx+st] = temp[idx];
    }

}

void mergeSort(vector<int> &arr, int st, int end) {
    if (st < end) {
        int mid = st +(end-st)/2;
        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,st,mid,end);
    }
}

//
int exponentialSearch(vector<int> arr, int tar) {
    if (arr[0] == tar){return  0;}
    int i = 1;
    while (i < arr.size() && arr[i] <= tar) {
        i *=2;
    }
    int st = i/2;
    int end = min(i, (int)arr.size() - 1);

    while (st <= end) {
       int mid = st + (end-st)/2;
        if (tar> arr[mid]) {
            st = mid + 1;
        }else if (tar < arr[mid]) {
            end = mid -1;
        }else {
            return mid;
        }
    }
return -1;
}

//
int binarySearch(vector<int> arr, int tar) {

    int st = 0, end = arr.size()-1;
    while (st <= end) {
         int mid = st + (end-st)/2;
        if (tar> arr[mid]) {
            st = mid + 1;
        }else if (tar < arr[mid]) {
            end = mid -1;
        }else {
            return mid;
        }
    }
    return -1;
}

//main function
int main() {
    int n, target;
    cout << "Enter the number of random integers to generate: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    vector<int> arr;
    generateRandomNumbers(arr, n);
    cout << "Generated numbers: ";
    displayArray(arr);

    vector<int> numbersForMergeSort = arr;
    vector<int> numbersForQuickSort = arr;

    // Merge Sort
    auto start = high_resolution_clock::now();
    mergeSort(numbersForMergeSort, 0, numbersForMergeSort.size() - 1);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Merge sort sorted numbers: ";
    displayArray(numbersForMergeSort);
    cout << "Time taken by MergeSort: " << duration.count() << " nanoseconds" << endl;

    // Quick Sort
    start = high_resolution_clock::now();
    quickSort(numbersForQuickSort, 0, numbersForQuickSort.size() - 1);
    stop = high_resolution_clock::now();
    duration = duration_cast<nanoseconds>(stop - start);
    cout << "Quick sort sorted numbers: ";
    displayArray(numbersForQuickSort);
    cout << "Time taken by QuickSort: " << duration.count() << " nanoseconds" << endl;

    // Search Operations
    cout << "Enter a number to search: ";
    cin >> target;

    // Binary Search on Merge Sorted Array
    start = high_resolution_clock::now();
    int binaryResult = binarySearch(numbersForMergeSort, target);
    stop = high_resolution_clock::now();
    duration = duration_cast<nanoseconds>(stop - start);
    if (binaryResult != -1) {
        cout << "Number found at index " << binaryResult << " using binary search" << endl;
    } else {
        cout << "Binary search: Number not found." << endl;
    }
    cout << "Time taken by BinarySearch: " << duration.count() << " nanoseconds" << endl;

    // Exponential Search on Quick Sorted Array
    start = high_resolution_clock::now();
    int exponentialResult = exponentialSearch(numbersForQuickSort, target);
    stop = high_resolution_clock::now();
    duration = duration_cast<nanoseconds>(stop - start);
    if (exponentialResult != -1) {
        cout << "Number found at index " << exponentialResult << " using exponential search" << endl;
    } else {
        cout << "Exponential search: Number not found." << endl;
    }
    cout << "Time taken by ExponentialSearch: " << duration.count() << " nanoseconds" << endl;

    return 0;
}
