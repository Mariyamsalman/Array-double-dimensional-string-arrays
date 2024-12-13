#include<iostream>
using namespace std;
int main()
{
	int arr1[3][4];
	for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){
		cout<<"enter the element of position"<<" "<<i+1<<" "<<j+1<<endl;
		cin>>arr1[i][j];
	}
}
		for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){
			cout<<arr1[i][j];
	}
	cout<<endl;
}
return 0;
}

