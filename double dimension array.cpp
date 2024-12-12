#include<iostream>
using namespace std;
int main()
{
	int sum=0,arr1[3][5]={ 
	               {1,4,6,8,9},
                   {2,3,4,5,6},
	               {7,8,9,12,13}
                   };
         int  min=arr1[2][4];
       for(int i=2;i>=0;i--){
       	for(int j=4;j>=0;j--){
       		sum+=arr1[i][j];
       		if(min>arr1[i][j]){
       			min=arr1[i][j];
			   }
		   }
	   }
	   cout<<sum;
	   cout<<"\n"<<min;
	
	return 0;
}
