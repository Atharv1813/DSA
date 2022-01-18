#include <bits/stdc++.h>
using namespace std ;

void bubble(int arr[] , int n);

void swap(int arr[] , int i , int j);

int main()
{

  int n ;
  cout<<"Enter the size of the array : ";
  cin>>n;
  int arr[n];
  for(int i=0 ;i < n ; i++)
  {
    cout<<"Enter the number : ";
    cin>>arr[i];
  }
  cout<<"Array brfore sorting : "<<endl;
  for(int i=0 ;i < n ; i++)
  {
   cout<<arr[i]<<"  ";
  }
  cout<<endl;
  
  bubble(arr , n);

  cout<<"Array After sorting : "<<endl;
  for(int i=0 ;i < n ; i++)
  {
    cout<<arr[i]<<"  ";
  }
}

void bubble(int arr[] , int n)
{
  for(int i=0 ; i<n-1 ;i++ )
    {
      bool swapped = false ;
        for(int j=0 ; j<n-i-1 ;j++)
        {
            if(arr[j+1] < arr[j])
            {
            swapped = true;
              swap(arr , j+1 , j);
            }
        }
         if(!swapped)
        {
          break;
        }
    }
}

void swap(int arr[] , int i , int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}