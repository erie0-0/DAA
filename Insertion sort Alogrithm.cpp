#include <iostream>
#include<cstdlib>
using namespace std;

void insertion(int A[], int n)
{
	int i ,j, key, count;
	for(i =1; i<n;i++)
	{	count =0;
		key = A[i];
		j = i-1;
		while(j>=0 && A[j]>key)
		{
			A[j+1]=A[j];
			j--;
			count++;
		}
		 A[j+1]= key;
		 
	}
	cout<<" No. of comparions = "<<count<<endl;
}

void print(int A[], int n){
	cout<<"Sorted Array = ";
	for (int i =0; i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	
}

int main()
{
	int size;
	int *A;
	cout<<"Enter size of list "<<endl;
	cin>>size;
	A= new int[size];
	
	for(int i=0; i<size;i++){
		A[i]= 30 + rand()%1000;
		cout<<A[i]<<" ";
		
	}
	cout<<endl;
	insertion(A,size);
	print(A,size);
	
	return 0;
}
