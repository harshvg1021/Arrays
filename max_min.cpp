#include<iostream>
using namespace std;


int max(int arr[],int size)
{
    int max;
    for(int i=0;i<size;i++){
        if(arr[i]<arr[i+1])
        {
            max = arr[i+1];
        }
        else
        {
            int temp;
            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            max = arr[i+1];
        }
    }
    
    return max;
}
int min(int arr[],int size)
{
    int min;
    for(int i=0;i<size-1;i++){
        if(arr[i] > arr[i+1])
        {
            min = arr[i+1];
        }
        else
        {
            int temp;
            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            min = arr[i+1];
        }
    }
    
    return min;
}



int main()
{   
    int size;
    cout<<"Enter size"<<endl;
    cin>>size;
    int *arr = new int(size);
    
    
    cout<<"Enter array : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Max element is :"<<max(arr,size-1)<<endl;
    cout<<"Min element is :"<<min(arr,size-1)<<endl;
}
