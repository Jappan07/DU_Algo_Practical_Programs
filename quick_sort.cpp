//Randomized quick sort
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void shuffle(int *a,int s,int e){
	srand(time(NULL));
	int i,j;
	for(int i=e;i>0;i--){
		//create a random index
		j=rand()%(i+1);
		swap(a[i],a[j]);
	}

}


int partition(int *arr,int s,int e){
	int pivot=arr[e];
	int i=s-1;
	int j=s;
	while(j<e){
		if (arr[j]<=pivot){
			i+=1;
			swap(arr[i],arr[j]);

		}j+=1;
	}swap(arr[e],arr[i+1]);
	return i+1;
}

void quick_sort(int *arr,int s,int e){
 
if(s>=e){
	return;
}
int p=partition(arr,s,e);
quick_sort(arr,s,p-1);
quick_sort(arr,p+1,e);

}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
n=(sizeof(arr)/sizeof(int));
shuffle(arr,0,n-1);
cout<<"shuffled array - ";
for (int i = 0; i < n; i++){
cout<<arr[i]<<" ";

}cout<<endl;

quick_sort(arr,0,n-1);
cout<<"Sorted array - ";
for (int i = 0; i < n; i++){
cout<<arr[i]<<" ";
}cout<<endl;

	return 0;
}