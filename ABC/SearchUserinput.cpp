#include <iostream>
using namespace std;

int findElement(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
            return i;
    }
    return -1;
}

 int main(){
     int n;

     cout << "Enter the number of elements of array: ";
     cin>>n;
      int arr[n];

     cout << "Enter " << n << " element : ";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }

     int key;
     cout<< "Enter the element of search: ";
     cin>>key;


     //function call
     int position=findElement(arr,n ,key);
     if(position ==-1)
        cout<< "Element not found"<<endl;
     else
         cout<< "Element found at position " << position+1;



return 0;



 }
