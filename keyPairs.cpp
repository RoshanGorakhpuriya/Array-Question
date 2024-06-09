#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;

//Approach-1 (Brute - force)
// T.C - O(n2) and S.C - O(1);
/*
bool checkTwoPairsSum(int arr[] , int n , int sum)
{
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                return true;
            }
        }
    }
    return false;
}
*/

// Approach-2 (Using Two-pointer)
// T.C - O(nlogn) ans S.C - O(1);

/*
bool checkTwoPairsSum(int arr[] , int n , int sum)
{
    sort(arr , arr+n);
    int i=0 ;
    int j=n-1;

    while(i<j)
    {
        if(arr[i] + arr[j] == sum)
        {
            return true;
        }
        else if(arr[i] + arr[j] > sum)
        {
            j--;
        }
        else if(arr[i] + arr[j] < sum)
        {
            i++;
        }
    }
    return false;
}
*/

// Approach-3 (Using hashing)
// T.C - O(n) and S.C - O(n)
bool checkTwoPairsSum(int arr[] , int n , int sum)
{
    unordered_set<int>s;

    for(int i=0 ; i<n ; i++)
    {
        if(s.count(sum-arr[i]))
        {
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}


int main(){
    int arr[6] = {1 , 4 , 45 , 6 , 10 , 8};
    int n = 6;
    int sum = 16;

    int ans = checkTwoPairsSum(arr , n , sum);

    if(ans)
    {
        cout<<"Sum has found\n";
    }
    else
    {
        cout<<"Sum not found\n";
    }
}