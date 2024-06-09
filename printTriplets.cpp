#include<iostream>
using namespace std;

void printTriplets(int arr[] , int n)
{
    int count =0;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            for(int k=0 ; k<n ; k++)
            {
                count++;
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
        }
    }
    cout<<count<<endl;
}

int main(){
    int arr[4] = {10 , 20 , 30 , 40};
    int n=4;

    printTriplets(arr , n);
}