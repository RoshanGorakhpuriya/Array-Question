#include<iostream>
#include<limits.h>
using namespace std;

//Approach-1 T.C-O(n2) and S.C-O(1)
/*
double maxAvgSubarray(int arr[] , int n , int k)
{
    int ans = INT_MIN;
    int i=0 , j=k-1;

    while(j<n)
    {
        int sum = 0;
        for(int z=i ; z<=j ; z++)
        { 
            sum = sum + arr[z];
        }
        ans = max(ans , sum);
        i++;
        j++;
    }
    double maxAvg = double(ans)/k;
    return maxAvg;
}
*/

//Approach-2 T.C-O(n) and S.C-O(1)
double maxAvgSubarray(int arr[] ,int n , int k)
{
    int ans = INT_MIN;
    int i=0;
    int j=k-1;
    int sum=0;

    for(int z=i ; z<=j ; z++)
    {
        sum = sum + arr[z];
    }
    ans = max(ans , sum);
    j++;
    while(j<n)
    {
        sum = sum - arr[i];
        sum = sum + arr[j];
        ans = max(ans , sum);
        i++;
        j++;
    }
    double maxAvg = double(ans)/k;
    return maxAvg;
}

int main(){
    int arr[6] = {1 , 12 , -5 , -6 , 50 , 3};

    int n=6;

    int k=2;

    double finalAns = maxAvgSubarray(arr , n , k);

    cout<<"Answer is = "<<finalAns<<endl;
}