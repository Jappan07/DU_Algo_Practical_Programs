//SELECTION SORT
#include<iostream>
using namespace std;
int main(){
    int a[]={5,4,1,3,2};
    int n=5,c=0;
    for(int i=0;i<=n-2;i++){
        int sindex=i;
        for(int j=i+1;j<=n-1;j++){
        if(a[j]<a[sindex]){
        sindex=j;c++;
        }
        }
        swap(a[i],a[sindex]);
        }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
        }cout<<"Number of comparisons - "<<c<<endl;
    return 0;
}