#include<iostream>
using namespace std;

void rotateArray(int arr[] , int n , int k)
{
    //store the k element into temp array;
    int temp[10000];
    int index = 0;
    for(int i=n-k ; i<n ; i++)
    {
        temp[index] = arr[i];
        index++;
    }

    // move element ahead k position;
    for(int i=n-1 ; i>=0 ; i--)
    {
        if(i-k >= 0)
        {
            arr[i] = arr[i-k];
        }
    }

    // copy the temp array into original array;
    for(int i=0 ; i<index ; i++)
    {
        arr[i] = temp[i];
    }
}

/*
void rotate(int arr[] , int s , int e)
{
    int start = s;
    int end = e;

    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[] , int n , int k)
{
    rotate(arr , 0 , k-1);
    rotate(arr , k , n-1);
    rotate(arr , 0 , n-1);
}
*/

void printArray(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[5] = {10 , 20 , 30 , 40 , 50};
    int n=5;
    int k=2;
    rotateArray(arr , n , k);
    printArray(arr , 5);
}