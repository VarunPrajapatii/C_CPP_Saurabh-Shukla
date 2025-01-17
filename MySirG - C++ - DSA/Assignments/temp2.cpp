#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int start, int end) {
    int pos=start;

    for(int i=start; i<=end; i++) {
        if(arr[i] <= arr[end]) {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quickSort(vector<int> &arr, int start, int end) {
    if(start >= end) return;
    int pivot = partition(arr, start, end);

    quickSort(arr, start, pivot-1);
    quickSort(arr, pivot+1, end);
}


int main() {
    vector<int> arr={6,4,2,8,13,7,11,9,3,6};

    quickSort(arr, 0, arr.size()-1);

    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
}