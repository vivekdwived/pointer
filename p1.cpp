#include <iostream>
using namespace std;

int main()
{
 char blocks[3] = {'A','B','C'};
   char *ptr = &blocks[0];
   char temp;

   temp = blocks[0];
	cout<<temp<<endl;
   temp = *(blocks + 2);
	cout<<temp<<endl;
   temp = *(ptr + 1);
	cout<<temp<<endl;
   temp = *ptr;
	cout<<temp<<endl<<"HELLO!"<<endl;

   ptr = blocks + 1;
	
   temp = *ptr;
	cout<<temp<<endl;
   temp = *(ptr + 1);
	cout<<temp<<"HELLO2"<<endl;

   ptr = blocks;
   temp = *++ptr;
	cout<<temp<<endl;
   temp = ++*ptr;
	cout<<temp<<endl;
   temp = *ptr++;
	cout<<temp<<endl;
   temp = *ptr;
	cout<<temp<<endl;
return 0;
}
