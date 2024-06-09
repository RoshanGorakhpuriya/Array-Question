#include<iostream>
#include<vector>
#include<set>
using namespace std;

// with the help of additional data structure - (set)

void commonInThreeSortedArray(int arr1[] , int n1 , int arr2[] , int n2 , int arr3[] , int n3)
{
    set<int>s;
    int i=0;
    int j=0;
    int k=0;

    while(i<n1 && j<n2 && k<n3)
    {

        if(arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            s.insert(arr1[i]);
            i++;
            j++;
            k++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else if(arr2[j] > arr3[k])
        {
            k++;
        }
        else
        {
            j++;
        }
    }
    for(auto i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
}

// without using any additional data structure;
/*
void commonInThreeSortedArray(int arr1[] , int n1 , int arr2[] , int n2 , int arr3[] , int n3)
{
    vector<int>ans;
    int i=0 , j=0 , k=0;
    while(i<n1 && j<n2 && k<n3)
    {

        if(arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            // way to handle duplicates
            if(ans.empty())
             {
                ans.push_back(arr1[i]);
            }
            else
            {
                ans.push_back(arr1[i]);
                if(ans[ans.size()-1] == ans[ans.size()-2])
                {
                    ans.pop_back();
                }
            }
            i++;
            j++;
            k++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else if(arr2[j] > arr3[k])
        {
            k++;
        }
        else
        {
            j++;
        }
    }
    for(auto i : ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
*/
int main(){
    int arr1[3] = {3 , 3 , 3};
    int arr2[3] = {3 , 3 , 3};
    int arr3[3] = {3 , 3 , 3};

    int n1=3;
    int n2=3;
    int n3=3;

    commonInThreeSortedArray(arr1 , n1 , arr2 , n2 , arr3 , n3);

}