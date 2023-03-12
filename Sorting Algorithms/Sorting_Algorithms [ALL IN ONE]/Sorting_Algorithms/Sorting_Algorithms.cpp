#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>&arr)
{
    for (int i = 1; i < arr.size(); i++){
        int key = arr[i];
        int j = i - 1;
        while (true){
            if (j < 0 || arr[j] <= key){
                break;
            }
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void selectionSort(vector<int>&v)
{
    int n = v.size();
    int mn_index;
    for (int i = 0; i < n - 1; i++) {
        mn_index = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[mn_index]) {
                mn_index = j;
            }
        }
        swap(v[i], v[mn_index]);
    }
}
void bubbleSort(vector<int>& v) 
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) { swap(v[j], v[j + 1]); }
        }
    }
}
void merge(vector<int>& v, int left, int right, int mid)
{
    // copy the right array in array R and left array to L
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int left_pointer = left, right_pointer2 = mid + 1;
    vector<int>L(n1 + 1), R(n2 + 1);
    for (int i = 0; i < n1; i++) {
        L[i] = v[left_pointer];
        left_pointer++;
    }
    for (int i = 0; i < n2; i++) {
        R[i] = v[right_pointer2];
        right_pointer2++;
    }
    L[n1] = INT_MAX; R[n2] = INT_MAX;
    // Update the original array
    int ptr1 = 0, ptr2 = 0;
    for (int i = left; i <= right; i++) {
        if (L[ptr1] <= R[ptr2]) {
            v[i] = L[ptr1];
            ptr1++;
        }
        else {
            v[i] = R[ptr2];
            ptr2++;
        }
    }
}
void mergeSort(vector<int>&v, int left, int right)
{
    if (left >= right) { return; }
    int mid = (left + right) / 2;
    mergeSort(v, left, mid);
    mergeSort(v, mid + 1, right);
    merge(v, left, right, mid);
}
int main()
{
    int n; cin >> n; 
    vector<int>v(n);
    for (auto& it : v) { cin >> it; }
    // choose your sorting algo
    mergeSort(v, 0, v.size()-1);
    for (auto it : v) { cout << it << " "; }
}