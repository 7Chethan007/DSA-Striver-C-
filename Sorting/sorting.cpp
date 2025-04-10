#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        int mini = i;
        for(int j = i; j <= n-1; j++){
            if(a[j] < a[mini]){
                mini = j;
            }
        }
        swap(a[i], a[mini]);
    }
}

void bubble_sort(int a[], int n) {
    for (int i = n-1; i >= 1; i--) {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0) {
            break;
        }
    }
}

void bubble_sort_recursion(int a[], int n) {
    if (n == 1) {
        return;
    }
    int didSwap = 0;
    for (int j = 0; j <= n - 2; j++) {
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            didSwap = 1;
        }
    }
    if (didSwap == 0) {
        return;
    }
    bubble_sort_recursion(a, n - 1);
}

void insertion_sort(int a[], int n) {
    for(int i = 0; i <= n ; i++) {
        int j = i;
        while(j > 0 && a[j] < a[j - 1]) {
            swap(a[j], a[j - 1]);
            j--;
        }
    }
}

void insertion_sort_recursion(int arr[],int i, int n) {
    if (n == 1) return;
    int j = i;
    while(j > 0 && arr[j-i] > arr[j]) {
        swap(arr[j], arr[j-1]);
        j--;
    }
    insertion_sort_recursion(arr, i+1, n);
}

// Merge Sort
void merge(vector<int> &arr, int low,int mid, int high) {
    vector<int> temp;
    int left = low, right = mid + 1;
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= mid) {
        temp.push_back(arr[right]);
        right++;
    }
}

void mS(vector<int> &arr, int low, int high) {
    if(low == high) return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high);
}

void mergeSort(vector<int> &arr, int n) {
    mS(arr, 0, n-1);
}

// Quick Sort
int partision(vector<int> &arr, int low, int high) {
    int pivot = arr[low], i = low, j = high;
    
    while(i < j) {
        while(arr[i] <= arr[pivot] && i <= high -1) i++;

        while(arr[j] >= arr[pivot] && j >= low) j--;

        if(i < j) swap(arr[i],arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qS(vector<int> &arr, int low, int high) {
    if(low < high) {
        int pIndex = partision(arr, low, high);
        qS(arr, low, pIndex-1);
        qS(arr, pIndex+1, high);
    }
}

vector<int> quickSort(vector<int> arr) {
    qS(arr, 0, arr.size()-1);
    return arr;
}