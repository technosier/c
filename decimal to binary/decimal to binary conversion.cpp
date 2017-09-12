
//***********************************************************************
//                   Decimal 2 Binary conversion IN C++ BY TECHNOSIER
//***********************************************************************

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{for(int m=0;m<3;++m)
{
unsigned ni,i=0,a[80],b,j=0;
float n,nd;

cout<<"\nENTER DECIMAL:";
cin>>n;
ni=n;
nd=n-ni;
cout<<"\nBINARY NUMBER:";
       if(ni==0)cout<<0;
	while(ni)
	{a[i]=ni%2;ni/=2;++i;}
	while(i)
	{cout<<a[i-1];--i;}
if(nd!=0)
{
cout<<".";
while(nd!=0)
{
 nd*=2;b=nd;cout<<b;
 if((int)nd>=1)nd-=(int)nd;
 ++j;if(j>9)break;
}
}
getch();
};
return 0 ;
}
