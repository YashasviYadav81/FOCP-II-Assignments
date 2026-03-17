#include<iostream>
using namespace std;
int main(){
int arr[5];
for(int i=0; i<5; i++){
    cin>>arr[i];
}
int even_sum=0;
int odd_sum=0;
for(int i=0; i<5; i++){
    if (arr[i]%2==0){
        even_sum+=arr[i];
    }
    else if(arr[i]%2!=0) {
        odd_sum+=arr[i];
    }
}
cout<<even_sum<<endl;
cout<<odd_sum<<endl;
return 0;
}