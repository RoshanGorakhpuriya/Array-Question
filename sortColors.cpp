#include<iostream>
#include<algorithm>
using namespace std;

// Appraoch - 3 T.C - O(nlogn) and S.C - O(1)
/*
void sortColors(int arr[] , int n)
{
    sort(arr , arr+n);
}
*/


// Approach - 2 T.C - O(n) and S.C - O(1)
/*
void sortColors(int arr[] , int n)
{
        int countZeroes = 0;
        int countOnes = 0;
        int countTwoes = 0;

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
            if(arr[i] == 2)
            {
                countTwoes++;
            }
        }

        for(int i=0 ; i<countZeroes ; i++)
        {
            arr[i] = 0;
        }
        for(int i=countZeroes ; i<(countZeroes + countOnes) ; i++)
        {
            arr[i] = 1;
        }
        for(int i=(countZeroes+countOnes) ; i<(countZeroes + countOnes + countTwoes) ; i++)
        {
            arr[i] = 2;
        }
}
*/

// Approach-3 T.C - O(n) and S.C - O(1)

void sortColors(int arr[] , int n)
{
    int l=0 , m=0 , h=n-1;

    while(m<=h)
    {
        if(arr[m] == 0)
        {
            swap(arr[l] , arr[m]);
            l++;
            m++;
        }

        else if(arr[m] == 1)
        {
            m++;
        }

        else if(arr[m] == 2)
        {
            swap(arr[m] , arr[h]);
            h--;
        }
    }
}


void printArray(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6] = {2 , 0 , 2 , 1 , 1, 0};

    int n=6;

    sortColors(arr , n);

    printArray(arr , n);
}