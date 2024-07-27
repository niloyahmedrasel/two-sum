#include <iostream>

using namespace std;

bool sum(int arr[],int target, int n,int result[]){

    for(int i=0;i<n;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
                result[0]=arr[i];
                result[1]=arr[j];
                return true;
            }
        }
    }
    return false;
}

int main() {

    int arr[5]={1,2,3,4,5};
    int target;
    cin>>target;
    int result[2] ;
    if(sum(arr,target,5,result)){
        cout<<result[0] <<" " <<result[1];
    }


    return 0;
}
