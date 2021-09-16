#include<bits/stdc++.h>
using namespace std;

int main(){
  
  array<int, 4> ar = {1,2,3,4};
  int size = ar.size();

  cout<<"Size of an array is"<<size<<endl;
  cout<<"Elements present in an array are:"<<endl;
  for(int i = 0;i < size;i++){
    cout<<ar[i]<<endl;
  }
  cout<<"Element at index 2 is "<<ar.at(2)<<endl;
  return 0;
}