#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int, int>desk_map;

    desk_map[1] = 54;
    desk_map[2] = 55;
    desk_map[3] = 56;
    desk_map[2] = 57;

    // map me iterate krne ke liye make 
    //an iterator

    unordered_map<int , int>::iterator it;

    // for(it = desk_map.begin() ; it!= desk_map.end() ; it++)
    // {
    //     int key = it->first;
    //     int value = it->second;

    //     cout<<"Key = "<<key<<" Value = "<<value<<endl;
    // }
    // cout<<endl;

    for(auto it : desk_map)
    {
        int key = it.first;
        int value = it.second;

        cout<<"Key = "<<key<<" Value = "<<value<<endl;
    }
    

    // Access value by key;
    if(desk_map.find(2) != desk_map.end())
    {
        int value = desk_map[2];
        cout<<value<<endl;
    }

    // delete

    

    for(auto it : desk_map)
    {
        int key = it.first;
        int value = it.second;

        cout<<"Key = "<<key<<" Value = "<<value<<endl;
    }


}

