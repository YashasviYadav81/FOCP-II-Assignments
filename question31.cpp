#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0; i<5; i++){
    if (arr[i]%3==0 && arr[i]%5==0){
count++;
    }
    }
    cout<<count;
    return 0;
}