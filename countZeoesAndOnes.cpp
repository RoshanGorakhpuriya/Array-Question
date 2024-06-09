#include<iostream>
using namespace std;

void count_zeros_and_ones(int arr[] , int n)
{
    int count_zeroes = 0;
    int count_ones = 0;

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == 0)
        {
            count_zeroes++;
        }
        if(arr[i] == 1)
        {
            count_ones++;
        }
    }
    cout<<"Count of zeroes is = "<<count_zeroes<<endl<<"Count of ones is = "
    <<count_ones<<endl;
}

int main(){
    int arr[6] = {0, 1 , 0 , 0 , 0 , 1};

    count_zeros_and_ones(arr , 6);
}