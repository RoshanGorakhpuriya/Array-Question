#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> factorialLargeNumber(int n)
{
    vector<int>ans;
    ans.push_back(1);
    int carry = 0;
    int i=2;
    while(i<=n)
    {
        for(int j=0 ; j<ans.size() ; j++)
        {
            int x = ans[j] * i + carry;
            ans[j] = x % 10;
            carry = x / 10;
        }
        while(carry)
        {
            ans.push_back(carry%10);
            carry /= 10;
        }
        i++;
    }
    reverse(ans.begin() , ans.end());
    return ans;
}

int main(){
    int n = 6;

    vector<int>res = factorialLargeNumber(n);

    for(auto i : res)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}