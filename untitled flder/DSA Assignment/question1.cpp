#include<iostream>
using namespace std;
void Nearestgreater(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j =i+1; j<n; j++){
         if(arr[i]<arr[j]){
            arr[i] = arr[j];
            break;
         }
        }
    }
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[5] = {5,5,9,7};
Nearestgreater(arr, 4);
}