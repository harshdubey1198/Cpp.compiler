#include<iostream>
using namespace std;
void fun(int n)
{
if(n>0){
  fun(n-1);
  cout<<n;
  
  }
  
  }
int main(){


  return 0;
}