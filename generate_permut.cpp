#include<iostream>
#include<string.h>
using namespace std;
void permutation(char arr[],int first,int last)
{
	if (first==last)
	{
		cout<<" "<<arr<<endl;
	}
	else
	{
		for(int i=first;i<=last;i++)
	     {
	     	swap(arr[first],arr[i]);
 	     	permutation(arr,first+1,last);
	     	swap(arr[first],arr[i]);
    	}
	}
}
int main()
{
	int num;
	cout<<"\n enter number of permutations:";
	cin>>num;
	{
		char str[num+1];
		for(int i=0,j=97;i<num;i++,j++)
		{
			str[i]=j;
		}
		cout<<"\n characters for permutation:";
		for(int i=0;i<num;i++)
		{
			cout<<" "<<str[i];
		}
		str[num]='\0';
		cout<<"\n generated permutations:"<<endl;
		permutation(str,0,num-1);
		
	}
	
}
