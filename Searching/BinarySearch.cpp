#include<bits/stdc++.h>
using namespace std ;
int binarySearch(int arr[] ,int l,int r, int x);
int main()
{
    int n ;
    cout<<"size of the array";
    cin>>n;
    int arr[n];
     for(int i =0 ;i<n ; i++)
    {
        cout<<endl<<"enter the element : ";
        cin>>arr[i];
    }
    sort(arr,arr+n);
   cout<<endl<<"Enter the key :";
    int key ;
    cin>>key ;
   int j = binarySearch(arr,0,n-1,key);

   if(j != -1)
   {
       cout<<"Element found at Position" <<  j+1;
   }
   else 
   {
       cout<<"Element is not found";
   }
}

int binarySearch(int arr[], int l,int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 

        if (arr[m] == x) 
            return m; 
        if (arr[m] < x) 
            l = m + 1; 
        else 
            r = m - 1; 
    } 
    return -1; 
}