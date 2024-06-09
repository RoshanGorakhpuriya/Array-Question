#include<iostream>
using namespace std;

int sumOfArray(int arr[] , int n)
{
    int sum = 0;
    for(int i=0 ; i<n ; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int arr[5] = {10 , 20 , 30 , 40 , 50};

    int ans = sumOfArray(arr , 5);

    cout<<"Sum of all the element of array = "<<ans<<endl;
}