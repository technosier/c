
//***********************************************************************
//                   Triangle IN C++ BY TECHNOSIER
//***********************************************************************


#include<iostream>
#include<conio.h>//clrscr();&getch(); ke liye
#include<iomanip>
using namespace std;
int main()
{
int i=0,j=1,h;

cout<<"ENTER HEIGHT:";
cin>>h;

while(i<h-1)
{
cout<<setw(2*(h-i))<<"& ";   //setw only works well on strings
if(i)cout<<setw(4*i)<<"& "; //setw make right alingment with
cout<<endl;
++i;
}
while(j<2*h){cout<<"& ";++j;}
getch();//stops screen
}
