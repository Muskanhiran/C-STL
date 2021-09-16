#include<bits/stdc++.h>
using namespace std;

int main(){
  
  array<int, 4> ar = {1,2,3,4};

  int size = ar.size();

   //Check whether array is empty or not.
  //0 indicates array is not empty, 1 indicates array is empty
  cout<<"Empty array or not: "<<ar.empty()<<endl;

  cout<<"Size of an array is: "<<size<<endl;
  cout<<"Elements present in an array are: "<<endl;
  
  for(int i = 0;i < size;i++){
    cout<<ar[i]<<endl;
  }

  cout<<"Element at 2nd index: "<<ar.at(2)<<endl;
  cout<<"First Element in an array: "<<ar.front()<<endl;
  cout<<"Last Element in an array: "<<ar.back()<<endl;
  
 
  return 0;
}