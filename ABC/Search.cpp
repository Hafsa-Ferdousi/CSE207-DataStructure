#include<bits/stdc++.h>
using namespace std;

    int findElement(int arr[], int n, int key){

    for(int i=0; i<n;i++)
        if(arr[i]==key)
           return i;

    return -1;//if not found


    }

    int main(){

    int arr[]= {10,2,5,56};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key=5;

    int position =findElement(arr,n ,key);
    if(position==-1)
        cout<< "Element is not found";
     else
         cout<< " Element is found at the position: "  << position+1;
    return 0;
}
