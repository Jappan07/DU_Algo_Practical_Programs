//BUBBLE SORT
#include<iostream>
using namespace std;
int main(){
    int n,a[100],c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<=n-2;i++){
    for(int j=0;j<=n-2;j++){
    if(a[j]>a[j+1]){
    c++;
    swap(a[j],a[j+1]);
    }
    }
    }for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
    }cout<<"\nNumber of comparisons - "<<c<<endl;
    return 0;
}