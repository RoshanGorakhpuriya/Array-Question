#include<iostream>
using namespace std;

void moveNegPos(int arr[] , int n)
{
    int i=0 , j=n-1;
    while(i<=j)
    {
        if(arr[i] < 0)
        {
            i++;
        }
        else if(arr[j] > 0)
        {
            j--;
        }
        else 
        {
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
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
    int arr[6] = {1 , 2 , -3 , 4 , -5 , 6};

    int n=6;

    moveNegPos(arr , n);

    printArray(arr , n);
}