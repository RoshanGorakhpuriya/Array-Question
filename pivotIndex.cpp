// #include<iostream>
// using namespace std;

// // Approach-1 T.C-O(n2) and S.C-O(1;/)
// /*
// int pivotIndex(int arr[] , int n)
// {
//     for(int i=0 ; i<n ; i++)
//     {
//         int leftSum = 0;
//         int rightSum = 0;
//         for(int j=0 ; j<i ; j++)
//         {
//             leftSum += arr[j];
//         }
//         for(int j=i+1 ; j<n ; j++)
//         {
//             rightSum += arr[j];
//         }
//         if(leftSum == rightSum)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// */

// // Approach-2 T.C-O(n) and S.C-O(n)
// int pivotIndex(int arr[] , int n)
// {
//     int leftSum[n];
//     leftSum[0] = 0;
//     int rightSum[n];
//     rightSum[n-1] = 0;

//     for(int i=1 ; i<n ; i++)
//     {
//         leftSum[i] = leftSum[i-1] + arr[i-1];
//     }

//     for(int i=n-2 ; i>=0 ; i--)
//     {
//         rightSum[i] = rightSum[i+1] + arr[i+1];
//     }

//     for(int i=0 ; i<n ; i++)
//     {
//         if(leftSum[i] == rightSum[i])
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[6] = {1 , 7 , 3 , 6 , 5 , 6};

//     int n = 6;

//     int ans = pivotIndex(arr , n);

//     cout<<"Answer is = "<<ans<<endl;

// }

#include<iostream>
using namespace std;

// int pivotIndex(int arr[] , int n)
// {   
//     for(int i=0 ; i<n ; i++)
//     {
//         int leftSum = 0;
//         int rightSum = 0;
//         for(int j=0 ; j<i ; j++)
//         {
//             leftSum = leftSum + arr[j];
//         }
//         for(int j=i+1 ; j<n ; j++)
//         {
//             rightSum = rightSum + arr[j];
//         }
//         if(leftSum == rightSum)
//         {
//             return i;
//         }
//     }
// }

int pivotIndex(int arr[] , int n)
{
    int leftSum[n];
    leftSum[0] = 0;
    int rightSum[n];
    rightSum[n-1] = 0;

    for(int i=1 ; i<n ; i++)
    {
        leftSum[i] = leftSum[i-1] + arr[i-1];
    }

    for(int i=n-2 ; i>=0 ; i--)
    {
        rightSum[i] = rightSum[i+1] + arr[i+1];
    }

    for(int i=0 ; i<n ; i++)
    {
        if(leftSum[i] == rightSum[i])
        {
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[6] = {1 , 7 , 3 , 6 , 5 , 6};
    
    int ans = pivotIndex(arr , 6);
    
    cout<<ans<<endl;
}