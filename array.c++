#include <iostream>
#include<algorithm>
#include <climits>
using namespace std;
void sw(int arr[],int si){
  int ans=0;
  for(int i=0;i<si;i=i+2){
    if((i+1)<si){
      swap(arr[i],arr[i+1]);
    }
  }
}
void p(int arr[],int si){
      for(int i=0;i<si;i++){
       cout<<arr[i]<<" ";
      }
}
int main()
{ int si,ans;
cout<<"Enter si: "<<endl;
cin>>si;
int arr[100];
for(int i=0;i<si;i++){
    scanf("%d",&arr[i]);
}

sw(arr,si);
p(arr,si);



}
