#include<iostream>
#include<algorithm>
using namespace std;

string addTwoArray(int arr1[] , int n1 , int arr2[] , int n2)
{
    string ans = "";
    int i=n1-1;
    int j=n2-1;
    int carry = 0;
    while(i>=0 && j>=0)
    {
        int sum = arr1[i] + arr2[j] + carry;
        int digit = sum % 10;
        ans.push_back(digit+'0');
        carry = sum / 10;
        i--;
        j--;
    }

    while(i>=0)
    {
        int sum = arr1[i] + carry;
        int digit = sum % 10;
        ans.push_back(digit+'0');
        carry = sum / 10;
        i--;
    }
    while(j>=0)
    {
        int sum = arr1[i] + carry;
        int digit = sum % 10;
        ans.push_back(digit + '0');
        carry = sum / 10;
        j--;
    }
    if(carry)
    {
        ans.push_back(carry+'0');
    }
    while(ans[ans.length()-1] == '0')
    {
        ans.pop_back();
    }

    reverse(ans.begin() , ans.end());
    return ans;
}

int main(){
    int arr1[6] = {0 , 9 , 0 , 0 , 3 , 5};
    int arr2[3] = {2 , 2 , 7};

    int n1 = 6;
    int n2 = 3;

    string ans = addTwoArray(arr1 , n1 ,  arr2 , n2);

    cout<<"FInal Addition of two array is = "<<ans<<endl;
}