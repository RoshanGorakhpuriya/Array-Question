#include<iostream>
#include<unordered_map>
using namespace std;


// T.C. - O(n2) and S.C. - O(1)
/*
int firstRepeatingElement(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[i] == arr[j])
            {
                return i+1;
            }
        }
    }
    return -1;
}
*/

// T.C. - O(n) and S.C - O(1)

int firstRepeatingElement(int arr[] , int n)
{
    unordered_map<int , int>m;

    for(int i=0 ; i<n ; i++)
    {
        m[arr[i]]++;
    }
    for(int i=0; i<n ; i++)
    {
        if(m[arr[i]] > 1)
        {
            return i+1;
        }
    }
    return -1;
}



int main(){
    int arr[7] = {1 , 7 , 5 , 4 , 3 , 5 , 6};

    int n = 7;

    int res = firstRepeatingElement(arr , n);

    cout<<"First repeating element position is = "<<res<<endl;
}