

//***********************************************************************
//                   Pascal Triangle IN C++ BY TECHNOSIER
//***********************************************************************

#include<iostream>
#include<conio.h>
using namespace std;
unsigned C(int,int);
int main()
{
for(int m=0;m<3;++m)
{

int i=0,k,j,n,l;
cout<<"\t\t\t\tPASCALS TRIANGLE \nENTER HEIGHT:";
cin>>n;
l=n;
while(i<n)
{ k=j=0;
  while(j<l){cout<<"  ";++j;}
  while(k<=i){cout<<C(i,k)<<"  ";++k;}
  ++i;--l;cout<<endl;
}
getch();
}
return 0;
}
unsigned C(int n,int r)
{
if(r>n/2) r= n-r;
unsigned C=1,d=1;
while(r)
{
C*=n;
d*=r;
--r;--n;
}
C/=d;
return C;
}
