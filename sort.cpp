#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of array you want to sort : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int count =0;
    while(count < size){
        for(int i=0;i<size-count;i++){
            if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            }
        }
        count++;
    }

    cout<<"The sorted array is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}