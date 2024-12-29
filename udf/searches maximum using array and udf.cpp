#include<iostream>
using namespace std;
int search(int a[]);
int main(){
	int nums[10],ans;
	cout<<"enter ten numbers";
	for(int i=0;i<=9;i++){
		cin>>nums[i];
	}
	ans=search(nums);
	cout<<"maximum is"<<ans;
	return 0;
}
int search(int b[]){
	int maximum=b[0];
	for(int j=1;j<=9;j++){
		if(maximum<=b[j]){
			maximum=b[j];
		}
	}
	return maximum;
}

