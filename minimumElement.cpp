#include<iostream>
#include<limits.h>
using namespace std;

int minimumElement(int arr[] , int n)
{
    int min = INT_MAX;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;

}

int main(){
    int arr[5] = {20 , 3 , 14 , 2 , 1};

    int ans = minimumElement(arr , 5);

    cout<<"Minimum Element is = "<<ans<<endl;
}