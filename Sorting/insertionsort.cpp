#include<iostream>
using namespace std;

/*void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>=1;j--){
            if (a[j]<a[j-1]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
            else
                break;
        }
    }
}*/
void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
} 

int main(){
    int a[5]={4,3,2,1,0};
    insertionSort(a,5); //insertionSort(array,size)
    for(int i=0;i<5;i++){
        cout<<a[i]<<"\n";
    }
    return 0;}

