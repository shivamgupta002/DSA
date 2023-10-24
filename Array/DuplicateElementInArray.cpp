/*
Given that all elements present in array 0->n-1. Only one element is comes twice than we have to find that element

eg1-> 5 1 2 3 4 2
output-> 2
*/
#include<iostream>
using namespace std;
int findDuplicate(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        ans=ans^i;
    }
    
    return ans;
}
int main(){
    int size;
    int arr[100];

    cout<<"Enter  the number of elements : ";
    cin>>size;

    cout<<"Enter the element in array : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Duplicate element in he array : "<<findDuplicate(arr, size)<<endl;
    
}