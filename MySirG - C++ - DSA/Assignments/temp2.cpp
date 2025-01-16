// #include <iostream>
// #include <vector>
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end) {
    vector<int> temp(end-start+1);
    int i=start, j=mid+1, index=0;
    while(i<=mid && j<=end) {
        if(arr[i] <= arr[j]) {
            temp[index] = arr[i];
            i++;
        } else {
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
    while(i <= mid) {
        temp[index] = arr[i];
        i++;
        index++;
    }

    while(j <= end) {
        temp[index] = arr[j];
        j++;
        index++;
    }
    index=0;
    while(start<=end) {
        arr[start] = temp[index];
        start++, index++;
    }
}

void mergeSort(vector<int> &arr, int start, int end) {
    if(start >= end) return;
    int mid = start + (end-start)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}


int main() {
    vector<int> nums={6,3,5,2,2,8,1,3,2,9};
    mergeSort(nums, 0, nums.size()-1);
    for(int i=0; i<nums.size(); i++) {
        cout<<nums[i]<<" ";
    }
    return 1;
}