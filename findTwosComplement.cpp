#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findTwosComplement(vector<int>&arr , int n)
{
    vector<int>ans;
    // find one's Complement
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }

    //find two's Complement
    int j=arr.size()-1;
    int carry = 1;

    while(j >= 0)
    {
        int x = arr[j] + carry;
        int digit = x % 2;
        ans.push_back(digit);
        carry = x / 2;
        j--;
    }

    /*
    while(carry)  // safe case , if carry two digits ki hui tho waise tho ni hogi 
    {
        ans.push_back(carry%2);
        carry /= 2;
    }
    */
    if(carry)
    {
        ans.push_back(carry);
    }
    reverse(ans.begin() , ans.end());
    return ans;
    
}

int main(){
    vector<int>arr{1 , 1 , 1 , 0 , 1 , 0 , 1 , 1 , 0};

    int n = arr.size();

    vector<int>res = findTwosComplement(arr , n);
  
    for(auto i : res)
    {
        cout<<i<<" ";

    }
    cout<<endl;
}