#include<iostream>
using namespace std;

class MaxHeap {
    int *arr;
    int size; //Total elements in heap
    int total_size; //Total size in array

    public:
    MaxHeap(int n) {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    //Insert into the heap
    void insert(int value) {
        //If heap size is availabel or not
        if(size == total_size) {
            cout<<"Heap overflow\n";
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        //Put the element in its correct position
        while(index > 0 && arr[(index-1)/2] < arr[index]) {
            swap(arr[index], arr[(index-1)/2]);
            index = (index-1)/2;
        }

        cout<<arr[index]<<" is inserted into the heap\n";
    }


    // Deletion into the heap
    int deletion() {
        if(size == 0) {
            cout<<"Heap underflow\n";
        }
        cout<<arr[0]<<" deleted from the heap\n";
        int ans = arr[0];
        arr[0] = arr[size-1];
        size--;
        if(size == 0) return ans;
        
        Heapify(0);
        return ans;
    }

    void Heapify(int index) {
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;

        if(left<size && arr[left]>arr[largest])
            largest = left;
        if(right<size && arr[right]>arr[largest]) 
            largest = right;
        
        if(largest != index) {
            swap(arr[index], arr[largest]);
            Heapify(largest);
        }
    }

    // Heap Sort Function
    void heapSort() {
        int originalSize = size; // Store original heap size

        // Step 1: Build Max Heap (already done while inserting)

        // Step 2: Extract elements one by one
        for(int i = size - 1; i > 0; i--) {
            swap(arr[0], arr[i]); // Move the root (largest) to the end
            size--; // Reduce heap size
            Heapify(0); // Restore heap property
        }

        size = originalSize; // Restore original heap size
    }

    void print() {
        for(int i=0; i<size; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};




int main() {
    MaxHeap H1(10);
    H1.insert(4);
    H1.insert(14);
    H1.insert(2);
    H1.insert(20);
    H1.insert(12);
    H1.insert(114);
    H1.print();
    H1.insert(125);
    H1.insert(56);
    H1.insert(12);
    H1.print();
    int del = H1.deletion();
    H1.print();


    return 0;
}