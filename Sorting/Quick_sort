#include<iostream>
using namespace std;

int partition(int ll,int ul,int a[]){
    int start,end,pivot;
    pivot=a[ll];
    start=ll;
    end=ul;
    while(start<end){
        while( a[start]<=pivot){
            start++;
        }
        while(a[end]>pivot){
            end--;
        }
        if(start<end){
            int t=a[start];
            a[start]=a[end];
            a[end]=t;
        }
    }
        int t=a[end];
        a[end]=a[ll];
        a[ll]=t;
        return end;
    }
void quicksort(int ll,int ul,int a[]){
    int cor_loc;
    if(ll<ul){
        cor_loc=partition(ll,ul,a);
        quicksort(ll,cor_loc-1,a);
        quicksort(cor_loc+1,ul,a);
    }
}
int main(){
    int n;
    cout<<"enter total number of elements: ";
    cin>>n;
    int a[n];
    cout<<"enter elements: ";
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     quicksort(0,n-1,a);
     for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
     }
     return 0;

}
