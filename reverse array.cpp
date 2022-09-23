#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	float temp;
	
	float arr[]={12,34,67,89,45,34,87};
	n=sizeof (arr)/sizeof (arr[0]);
	
	for(int i=0;i<n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
			
	} 
	for(int i=0;i<n;i++){
		printf("%.3.0f",arr[i]);
		
	}
	
}
