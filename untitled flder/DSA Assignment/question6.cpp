#include<iostream>
using namespace std;
void PairSum(int arr[], int n,  int s){
    int count = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++ ){
            if(arr[i]+arr[j]==s){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                count++;
            }
            
        }
    }
    if(count == 0){
        cout<<"no such pair";
    }
}
int main(){
int arr[6] = {1,2,3,-1,9,5};
PairSum(arr, 6, 5);
return 0;
}