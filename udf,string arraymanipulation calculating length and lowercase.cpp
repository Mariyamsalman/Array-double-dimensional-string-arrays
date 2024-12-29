#include<iostream>
using namespace std;
void calculates_length(char a[]);
void lowercase(char a[]);
int main()
{
	char name[3]={'A','l','I'};
	calculates_length(name);
	lowercase(name);
	return 0;
}
void calculates_length(char a[]){
	int length=0;
	for(int i=0;a[i]!='\0';i++){
		length++;
	}
	cout<<length;
}
void lowercase(char a[])
{
	for(int i=0;i<=2;i++){
	if(a[i]>='A'&&a[i]<='Z'){
		a[i]=a[i]+32;
	}
	
}
cout<<a;

}
