#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int count=0;
	char arr1[20];
	cout<<"enter your name";
	gets(arr1);
	for(int i=0;arr1[i]!='\0';i++)
	{
		cout<<arr1[i]<<"\t";
		count++;
	}
	cout<<"\n"<<count;
	return 0;
}
