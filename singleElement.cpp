#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

int singleElement(int arr[] , int n)
{
    unordered_map<int , int>freq_map;

    for(int i=0 ; i<n ; i++)
    {
        int num = arr[i];
        freq_map[num] = freq_map[num] + 1;
    }

    unordered_map<int,int>::iterator it;
    int ans = -1;
    for(it = freq_map.begin() ; it != freq_map.end() ; it++)
    {
        int key = it->first;
        int value = it->second;
        if(value == 1)
        {
            ans = key;
            break;
        }
    }
    return ans;
}

/*
int singleElement(int arr[] , int n)
{
    int ans = -1;
    sort(arr , arr+n);
    for(int i=0 ; i<n ; i+=2)
    {
        if( i== n-1 || arr[i] != arr[i+1])
        {
            ans = arr[i];
            break;
        }
    }
    return ans;
}
*/

/*
int singleElement(int arr[] , int n)
{
    int ans = 0;
    for(int i=0 ; i<n ; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
*/

int main(){
    int arr[5] = {1 , 3 , 3 , 1 , 2};

    // int res = singleElement(arr , 5);

    // cout<<res<<endl;

    int ans = singleElement(arr , 5);

    cout<<ans<<endl;

}