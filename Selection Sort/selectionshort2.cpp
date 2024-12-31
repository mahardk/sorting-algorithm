#include <iostream>
using namespace std;

int main(){
int data[]= {5,4,3,2,1,3,2,1,2,1,-69,-21};
int temp;
int n = 12;

for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(data[i]>data[j]){
            temp=data[i];
            data[i]=data[j];
            data[j]=temp;
        }
    }
}

for (int i=0; i<n; i++){
    cout<<data[i]<<" ";
}
}
