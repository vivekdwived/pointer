	//Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.

#include<iostream>
using namespace std;

/*

1.get the no. of characters in the string
2.get the string and STORE IT IN AN ARRAY;
3.use function to get array
4.find size of array in function and return it

*/
int myStrLen(char *a)
{	int length=sizeof(a);
	cout<<length<<endl;
	return length;
}




int main()
{	int n;

	
	cout<<"enter the elements of the array:";
		for (int i=0;i<n;i++)
		{cin>>a[i];}
	int length=myStrLen(a);
	cout<<"length of the string is :"<<length;
return 0;
}
