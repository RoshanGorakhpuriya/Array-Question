#include<iostream>
#include<limits.h>
using namespace std;

// Naive Approach -> T.C.- O(n2) and S.C. - O(1);
/*
int maximumSubarray(int arr[] , int n)
{
    int res = INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        int sum = 0;
        for(int j=i ; j<n ; j++)
        {
            sum = sum + arr[j];
            res = max(res , sum);
        }
    }
    return res;
}
*/

// ******Kadane's Algorihtm******
// T.C-O(n) and S.C-O(1)

/*
Iterate karo
Sum karo
ans ko update karo
sum <0 
    sum = 0
*/
int maximumSubarray(int arr[] , int n)
{
    int ans = INT_MIN;
    int sum = 0;
    for(int i=0 ; i<n ; i++)
    {
        sum = sum + arr[i];
        ans = max(ans , sum);
        
        if(sum < 0)
        {
            sum = 0;
        }
    }
    return sum;
}


int main(){
    int arr[9] = {-2 , -1 , -3 , 4 , -1 , 2 , 1 , -5 , 4};

    int n=9;

    int ans = maximumSubarray(arr , n);

    cout<<"Answer is = "<<ans<<endl;
}