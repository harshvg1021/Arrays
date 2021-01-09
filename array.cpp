#include<iostream>
using namespace std;
int main()
{
	int a[50],n,num,pos,i;
	cout<<"Enter the size of array : "<<endl;
	cin>>n;
	if(n>50)
		cout<<"OVERFLOW CONDITION"<<endl;
	else
	{	
		
		cout<<"Enter elements of array : "<<endl;
		for(i=0;i<n;i++)
			{
			cin>>a[i];
			}
		cout<<"The array you entered is : "<<endl; 
		for(i=0;i<n;i++)
			{
			cout<<a[i]<<" ";
			}
	}
	
	//Inserting element at any position
	cout<<endl<<"Enter num you want to insert : ";
	cin>>num;
	cout<<"Enter position : ";
	cin>>pos;
	if(pos<0||pos>n)
	cout<<"Invalid Input"<<endl;
	else{
		for(i=n-1;i>=pos;i--)
			{
		a[i+1]=a[i];
			}
		
		a[pos]=num;
		n++;
		cout<<"The new array is : ";
		for(i=0;i<n;i++)
		{
		cout<<a[i]<<" ";
		}
	}
	cout<<endl;
	
	//Deleting element from any position
	int del;
	cout<<"Enter the position to be deleted from : ";
	cin>>del;
		if(del<0||del>n)
			cout<<"Invalid Position : ";
			
		else
		{
			for(i=del;i<n;i++)
			{
				a[i]=a[i+1];
			}
			n--;
			for(i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
                }
       
        //Searching element from array
        int ele;
        cout<<"Enter element to be searched : "<<endl;
        cin>>ele;
        for(i=0;i<n;i++)
        {
        if(ele==a[i])
        {
        cout<<"Element found at index : "<<i<<endl;
        break;
        }
        }
        if(ele==n)
        {
        cout<<"Element is not present in array"<<endl;
        }
}




