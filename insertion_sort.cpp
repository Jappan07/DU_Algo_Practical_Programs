// INSERTION SORT
#include<iostream>
using namespace std;
void InsertionSort(int a[],int n){
    int j,c=0;
for(int i=1;i<n;i++){
    int no=a[i];
for(j=i-1;j>=0&&a[j]>no;j--){
    a[j+1]=a[j];c++;
}
a[j+1]=no;
}
}
int main(){
int a[100],n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
InsertionSort(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}cout<<'\n';
cout<<"Number of comparisons - "<<c<<endl

    return 0;
}