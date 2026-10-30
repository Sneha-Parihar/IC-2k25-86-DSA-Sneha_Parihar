#include<iostream>
#define max 5
using namespace std;
void bs(int a[]){
    for(int i=0;i<max-1;i++){
        for(int j=0;j<(max-1-i);j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
            cout<<endl;
        }
    }
}
void display(int a[]){
    for(int i=0;i<max;i++){
        cout<<a[i]<<' ';
    }
}
int main(){
    int a[max];
    cout<<"enter array elements: ";
            for(int i=0;i<max;i++){
                cin>>a[i];
            }
    bs(a);
   display(a);
    return 0;
}

