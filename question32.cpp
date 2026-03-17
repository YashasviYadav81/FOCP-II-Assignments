#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
             if(arr[0]<arr[1]){
              arr[i]=arr[j];
             }
        }
    }
    cout<<arr<<endl;
    return 0;
}
// you can also do it using int max varisble and other second max variable
