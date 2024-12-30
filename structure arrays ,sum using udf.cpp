#include<iostream>
using namespace std;
struct data {
	int marks[5];
	char name[30];
};
void sum(int a[]);
int main()
{
	data p1;
	cout<<"enter marks of 5 subjects";
	for(int i=0;i<=4;i++){
		cin>>p1.marks[i];
	}
	sum(p1.marks);
	return 0;
}
void sum (int marks[]){
	int sums=0;
	for(int i=0;i<=4;i++){
	sums=sums+marks[i];
	}
	cout<<sums;
}
