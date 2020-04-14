#include<iostream>
using namespace std;


void countingSort(int* data,int exp,int n){
	int output[n];
	int count[10]={0};


	for(int i=0;i<n;i++){
		int index=data[i]/exp;
		count[(index%10)]+=1;
	}

	for(int i=1;i<10;i++){
		count[i]+=count[i-1];
	}

	int i=n-1;
	while(i>=0){
		int index=data[i]/exp;
		output[count[(index%10)]-1]=data[i];
		count[(index%10)]-=1;
		i-=1;
	}
	for(int i=0;i<n;i++){
		data[i]=output[i];
	}


}

void radix_sort(int *data,int n){
	int m=*max_element(data,data+n);
	int exp=1;
	while (m/exp>0){
		countingSort(data,exp,n);
		exp*=10;
	}

}
int main(){
int data[]={432,8,530,90,88,231,11,45,677,199};
int n=sizeof(data)/sizeof(int);
cout<<"Given array - ";
for (int i = 0; i < n; i++)
{
	cout<<data[i]<<" ";
}cout<<endl;
radix_sort(data,n);
cout<<"Sorted array is - ";
for (int i = 0; i < n; i++)
{
	cout<<data[i]<<" ";
}cout<<endl;


	return 0;
}