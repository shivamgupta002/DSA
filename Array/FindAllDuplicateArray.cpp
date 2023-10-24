/*
Leet Code problem 442
Given that each integer appears once or twice,return an array of all integer that appear twice

example1-> 1,1,2
output-> 1
example2-> 4 3 2 7 8 2 3 1
output-> 2,3
*/

#include<iostream>
#include <algorithm>
using namespace std;

int findDuplicates(int arr[],int size){
    sort(arr,arr+size);
    for(int i=0;i<size;i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
}
int main() {
    int size;
    int arr[100];
    cout<<"Enter the size of array : ";
    cin>>size;

    cout<<"Enter the elements of array : ";
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }

    cout<<"All duplicate elements of array : ";
    findDuplicates(arr, size);
}