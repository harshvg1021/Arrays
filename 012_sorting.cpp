#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter Size: "<<endl;
    cin>>size;
    
    int arr[size];
    
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    int count0,count1,count2;
    count0=count1=count2=0;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        count0++;
        if(arr[i]==1)
        count1++;
        if(arr[i]==2)
        count2++;
    }
    
    cout<<count0<<" "<<count1<<" "<<count2<<" "<<endl;
    
    for(int i=0;i<count0;i++)
    {
        arr[i]=0;
    }
    for(int i=count0;i<count0+count1;i++)
    {
        arr[i]=1;
    }
     for(int i=count1+count0;i<count0+count1+count2;i++)
    {
        arr[i]=2;
    }
    
    cout<<"The sorted array is: "<<endl;
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
