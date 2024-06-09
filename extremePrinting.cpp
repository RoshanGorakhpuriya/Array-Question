#include<iostream>
using namespace std;

void extremePrinting(int arr[] , int n)
{
    int start = 0;
    int end = n-1;

    while(start <= end)
    {
        if(start == end)
        {
            cout<<arr[start]<<" ";
            break;
        }
        cout<<arr[start]<<" "<<arr[end]<<" ";
        start++;
        end--;
    }
}

int main(){
    int arr[5] = {10 , 20 , 30 , 40 , 50};

    extremePrinting(arr , 5);
}