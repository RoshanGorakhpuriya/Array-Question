#include<iostream>
#include<limits.h>
using namespace std;

int maximumElement(int arr[] , int n)
{
    int max = INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[5] = {20 , 3 , 14 , 25 , 7};

    int ans = maximumElement(arr , 5);

    cout<<"Maximum Element is = "<<ans<<endl;
}