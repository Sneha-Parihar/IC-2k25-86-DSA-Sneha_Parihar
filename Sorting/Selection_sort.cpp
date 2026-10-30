#include<iostream>
using namespace std;
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
}
void selection_sort(int a[],int n){
      for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
      }
}
int main(){
    int n;
    cout<<"enter size of an array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements in array";
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    selection_sort(a,n);
    display(a,n);
    return 0;
}
