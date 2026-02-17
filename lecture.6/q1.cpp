#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number:";
cin>>n;
for(int i=1; i<=n;i++){
  for(int j=i-1;j<n;j++){
    cout<<"* ";
  }
  cout<<"\n";
}

return 0;
}


