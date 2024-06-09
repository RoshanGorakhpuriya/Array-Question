#include<iostream>
using namespace std;

void reverseArray(int arr[] , int n)
{
    int start = 0;
    int end = n-1;

    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6] = {10 , 20 , 30 , 40 , 50 , 60};

    reverseArray(arr , 6);

    printArray(arr , 6);
}