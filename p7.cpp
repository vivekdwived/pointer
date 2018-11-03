	//Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.

	#include<iostream>
	using namespace std;

	/*
	1.get the no of elements in arr
	2.get the array 
	3.call a function having array 
	4.have a for loop to get the maximum element 
	5.again use the for loop to get the index of this maxima element
	6.then declare a pointer ,send it to that index of the array.
	*/

	double* maximum(double* a, int n)
	{	for(int i=0;i<n;i++)
		{	double max;
			if(a[i]>a[(i+1)])
			max=a[i];
			else max=a[(i+1)];
		cout<<"YES"<<max<<endl;
		}
		int j;
	/*	for(int i=0;i<n;i++)
		{	if(max==(a[i]))
			{ j=i;
			cout<<j<<endl;
			}
	}*/.......................................problem is with max...line

		double *q=&a[j];
	return q;
	}


	int main()
	{	int n;

		cout<<"enter the size of your integer array:"<<endl;
		cin>>n;
	
		double a[n];
		cout<<"enter the elements of the array:";
			for (int i=0;i<n;i++){
			cin>>a[i];
			}

		double *ptr;
		cout<<"HEY"<<endl;
		ptr=maximum(a,n);
		cout<<"HEY"<<*ptr;
	return 0;
	}
