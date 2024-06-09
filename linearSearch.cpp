#include<iostream>
using namespace std;

int  linearSearch(int arr[] , int n , int x)
{
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {10 , 20 , 30 , 40 , 50};

    int ans = linearSearch(arr , 5 , 50);

    if(ans == -1)
    {
        cout<<"Element not found\n";
    }
    else
    {
        cout<<"Element found at index = "<<ans<<endl;
    }
}