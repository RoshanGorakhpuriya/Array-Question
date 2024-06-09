#include<iostream>
#include<algorithm>
using namespace std;

// Approach-1 T.C - O(nlogn) and S.C - O(1)
/*
int  removeDuplicate(int arr[] , int n)
{
    sort(arr , arr+n);
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i] == arr[i-1])
        {
            return arr[i];
        }
    }
    return -1;
}
*/

// Approach-2 T.C - O(n) and S.C - O(1)
/*
int  removeDuplicate(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        int index = abs(arr[i]);
        if(arr[index] < 0)
        {
            return index;
        }
        arr[index] = arr[index] * -1;
    }
    return -1;
}
*/

// Approach-3 T.C - O(n) and S.C - O(1)
int  removeDuplicate(int arr[] , int n)
{
    while(arr[0] != arr[arr[0]])
    {
        swap(arr[0] , arr[arr[0]]);
    }
    return arr[0];
}


int main(){
    int arr[5] = {1,3,4,2,2};

    int n = 5;

    int ans = removeDuplicate(arr , n);

    cout<<"Duplicate Element is = "<<ans<<endl;
}