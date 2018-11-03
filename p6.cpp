
	/*Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array.  */

	#include <iostream>
	using namespace std;

	int fun(int a[],int n)
	{	int sum=0;
		{	for ( int i=0;i<n;i++)
			if (a[i]%2==0)
			sum++;
		}
	return sum;
	}

	int main()
	{	int n;

	/*
	1.get the size of array 
	2. get the array itself
	3.use for loop TO CHECH IF EACH ELEMENT IS EVEN
	4.use a vaiable sum to count no of even nos....
	*/

	cout<<"enter the size of your integer array:"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the elements of the array:";
		for (int i=0;i<n;i++){
		cin>>a[i];
		}
	
	//use function to check if every element is even or not then cout using a parameter as int sum=0;...
	int z=fun(a,n);
	
	cout<<"no of even no. in array is:"<<z<<endl;

	return 0;
	}


