// Bubble Sort

#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    
    return;
}

int main(){
    int arr[] = {78,98,6,52,4,8,1,25,5,63,91,18,28};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }

    return 0;
}
