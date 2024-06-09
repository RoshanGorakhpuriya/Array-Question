#include<iostream>
using namespace std;

int removeDupFromSorted(int arr[] , int n)
{
    int i=0 , j=1;

    while(j<n)
    {
        if(arr[i] == arr[j])
        {
            j++;
        }
        else
        {
            i++;
            arr[i] = arr[j];
            j++;
        }
    }
    return i+1;
}

int main(){
    int arr[3] = {1 , 1 , 2};

    int n = 3;

    int ans = removeDupFromSorted(arr , 3);

    cout<<"Answer is = "<<ans<<endl;
}