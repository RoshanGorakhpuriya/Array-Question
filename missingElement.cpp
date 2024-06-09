#include<iostream>
using namespace std;


// Approach-1 T.C - O(n) and S.C - O(1) with modify
/*
void missingElement(int arr[] , int n)
{
     for(int i=0 ; i<n ; i++)
    {
        int index = abs(arr[i]);
        if(arr[index-1] > 0)
        {
            arr[index-1] = arr[index-1] * -1;
        }
    }
    
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] > 0)
        {
            cout<<i+1<<endl;
        }
    }
}
*/

// Approach - 2 T.C - O(n) and S.C - O(1) without modify

void missingElement(int arr[] , int n)
{   
    int i=0;
    while(i<n)
    {
        int index = arr[i] - 1;
        if(arr[i] != arr[index])
        
        {
            swap(arr[i] , arr[index]);
        }
        else
        {
            i++;
        }
    }
    cout<<endl;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] != i+1)
        {
            cout<<i+1<<" ";
        }
    }
}
int main(){
    int arr[5] = {5 , 2 , 1 , 2 , 4};
    
    int n = 5;
    
    missingElement(arr , n);
}