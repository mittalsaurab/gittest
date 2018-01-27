#include<iostream>
using namespace std;
int main()
{
  int i,n,a;
  cout<<"Enter the max value";
  cin>>n;
  cout<<"Hello everybody!";
  for(i=1;i<=n;i++)
  {
    if(i%2==0)
    cout<<i-1;
  }

  exit (0);
}
