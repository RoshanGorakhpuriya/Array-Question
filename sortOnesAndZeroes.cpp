#include<iostream>
using namespace std;

void sortOnesAndZeroes(int arr[] , int n)
{
    /*
    int countZeroes = 0;
    int countOnes = 0;

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == 0)
        {
            countZeroes++;
        }
        if(arr[i] == 1)
        {
            countOnes++;
        }
    }

    for(int i=0 ; i<countZeroes ; i++)
    {
        arr[i] = 0;
    }
    for(int i=countZeroes ; i<(countZeroes+countOnes) ; i++)
    {
        arr[i] = 1;
    }
    */
  // Two-pointer approach;
   int low = 0;
   int high = n-1;

   while(low < high)
   {
    while(arr[low] == 0)
    {
        low++;
    }
    while(arr[high] == 1)
    {
        high--;
    }
    swap(arr[low] , arr[high]);
    low++;
    high--;
   }
}

void printArray(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5] = {0 , 0, 1 , 0 , 1};

    sortOnesAndZeroes(arr , 5);

    printArray(arr , 5);
}