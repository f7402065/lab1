#include<iostream>
using namespace std;

int main()
{
  int i,n;
  cin>>n;
  while(1)
   {

    cout<<n<<" ";

    if(n == 1)
      break;


    if(n%2 == 1)
      n=3*n+1;
    else
      n/=2;


   }

  cout<<endl;

  return 0;



}
