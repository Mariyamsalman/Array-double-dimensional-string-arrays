#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char arr1[20];
   cout<<"enter your name:";
   gets(arr1);
   for(int i=0;arr1[i]!='\0';i++){
   	if(arr1[i]>='A'&&arr1[i]<='Z')//checks if it is uppercase
	   { 
   	arr1[i]=arr1[i]+32;//converts it in lowercase
   }
}
   cout<<"converted in lowercase"<<"\n"<<arr1<<endl;
	return 0;
}
