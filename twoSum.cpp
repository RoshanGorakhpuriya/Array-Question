#include<iostream>
#include<limits.h>
using namespace std;

/*
pair<int , int> twoSum(int arr[] , int n , int target)
{

    pair<int , int>ans = make_pair(-1 , -1);
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
}
*/

void twoSumUsingArray(int arr[] , int n , int ans[] , int target)
{
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                ans[0] = arr[i];
                ans[1] = arr[j];
                cout<<ans[0]<<" "<<ans[1]<<endl;
                return;
            }
        }
    }
}

/*void printAll(int arr[] , int n , int target)
{
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}
*/

int main(){
    int arr[4] = {10 , 20 , 30 , 40};

    /*

    pair<int , int>ans = twoSum(arr , 4 , 60);

    if(ans.first == -1 && ans.second == -1)
    {
        cout<<"Pair not found\n";
    }
    else
    {
        cout<<"Pair found "<<ans.first<<" "<<ans.second<<endl;
    }
    */

   int ans[2] = {INT_MIN, INT_MIN};

   twoSumUsingArray(arr , 4 , ans , 60);

//    printAll(arr , 4 , 60);
}