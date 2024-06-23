#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[]={1,5,4,3,2,1};
    bubbleSort(arr,6);
    for(int i=0;i<6;i++){
        printf("%d ,",arr[i]);
    }
    return 0;
}
