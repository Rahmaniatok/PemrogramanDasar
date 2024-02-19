#include<iostream>
using namespace std;
int main()
{
clrscr();
randomize();
int z[10]={0,0,0,0,0,0,0,0,0};
int m=0,g=0,b,c,i,j,T=1;
char a[3][3];
goto b;
a:
clrscr();
goto d;
e:
clrscr();
cout<<"\t\t\t"<<"TIC-TAC-TOE GAME !!!!!!"<<endl;
cout<<endl;
cout<<"\t\t\t"<<a[0][0]<<" | "<<a[0][1]<<" | "<<a[0][2]<<"\n";
cout<<"\t\t\t"<<"--|---|---"<<"\n";
cout<<"\t\t\t"<<a[1][0]<<" | "<<a[1][1]<<" | "<<a[1][2]<<"\n";
cout<<"\t\t\t"<<"--|---|---"<<"\n";
cout<<"\t\t\t"<<a[2][0]<<" | "<<a[2][1]<<" | "<<a[2][2]<<"\n";
if(g==1)
{
 cout<<endl<<"X Wins !!!!";
 goto f;
}
if(g==2)
{
 cout<<endl<<"O Wins !!!!";
 goto f;
}
if(g==3)
{
 cout<<endl<<"It's a Draw !!!!";
 goto f;
}
cout<<"Enter no: "; cin>>b;
if(b==1)
{
 if(z[0]!=1)
 {
  a[0][0]='X';
  goto c0;
 }
}
if(b==2)
{
 if(z[1]!=1)
 {
  a[0][1]='X';
  goto c0;
 }
}
if(b==3)
{
 if(z[2]!=1)
 {
  a[0][2]='X';
  goto c0;
 }
}
if(b==4)
{
 if(z[3]!=1)
 {
  a[1][0]='X';
  goto c0;
 }
}
if(b==5)
{
 if(z[4]!=1)
 {
  a[1][1]='X';
  goto c0;
 }
}
if(b==6)
{
 if(z[5]!=1)
 {
  a[1][2]='X';
  goto c0;
 }
}
if(b==7)
{
 if(z[6]!=1)
 {
  a[2][0]='X';
  goto c0;
 }
}
if(b==8)
{
 if(z[7]!=1)
 {
  a[2][1]='X';
  goto c0;
 }
}
if(b==9)
{
 if(z[8]!=1)
 {
  a[2][2]='X';
  goto c0;
 }
}
else
{
 cout<<"Enter numbers from the grid -";
 goto a;
}

b:
a[0][0]='1';
a[0][1]='2';
a[0][2]='3';
a[1][0]='4';
a[1][1]='5';
a[1][2]='6';
a[2][0]='7';
a[2][1]='8';
a[2][2]='9';
goto a;

c0:
goto d;
c1:
goto g;
 c2:
 c=random(1000)%9;
 if(c==0 && a[0][0]!='X' && a[0][0]!='O')
 {
  a[0][0]='O';
  z[0]=1;
  goto a;
 }
 if(c==1 && a[0][1]!='X' && a[0][1]!='O')
 {
  a[0][1]='O';
  z[1]=1;
  goto a;
 }
 if(c==2 && a[0][2]!='X' && a[0][2]!='O')
 {
  a[0][2]='O';
  z[2]=1;
  goto a;
 }
 if(c==3 && a[1][0]!='X' && a[1][0]!='O')
 {
  a[1][0]='O';
  z[3]=1;
  goto a;
 }
 if(c==4 && a[1][1]!='X' && a[1][1]!='O')
 {
  a[1][1]='O';
  z[4]=1;
  goto a;
 }
 if(c==5 && a[1][2]!='X' && a[1][2]!='O')
 {
  a[1][2]='O';
  z[5]=1;
  goto a;
 }
 if(c==6 && a[2][0]!='X' && a[2][0]!='O')
 {
  a[2][0]='O';
  z[6]=1;
  goto a;
 }
 if(c==7 && a[2][1]!='X' && a[2][1]!='O')
 {
  a[2][1]='O';
  z[7]=1;
  goto a;
 }
 if(c==8 && a[2][2]!='X' && a[2][2]!='O')
 {
  a[2][2]='O';
  z[8]=1;
  goto a;
 }
else
 {
  goto c1;
 }
d:
if(a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X')
{
 g=1;
 goto e;
}
if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X')
{
 g=1;
 goto e;
}
if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X')
{
 g=1;
 goto e;
}
if(a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X')
{
 g=1;
 goto e;
}
if(a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X')
{
 g=1;
 goto e;
}
if(a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X')
{
 g=1;
 goto e;
}
if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X')
{
 g=1;
 goto e;
}
if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X')
{
 g=1;
 goto e;
}
if(a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O')
{
 g=2;
 goto e;
}
if(a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O')
{
 g=2;
 goto e;
}
if(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O')
{
 g=2;
 goto e;
}
if(a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O')
{
 g=2;
 goto e;
}
if(a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='O')
{
 g=2;
 goto e;
}
if(a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='O')
{
 g=2;
 goto e;
}
if(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O')
{
 g=2;
 goto e;
}
if(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O')
{
 g=2;
 goto e;
}
else
{
 if(T==1)
 {
  T--;
  goto e;
 }
 if(T==0)
 {
  T++;
  goto c1;
 }
}
g:
m=0;
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  if(a[i][j]=='X' || a[i][j]=='O')
  {
   m++;
  }
 }
}
if(m==9)
{
g=3;
goto a;
}
goto c2;
f:
cout<<" ";
getch();
return 0;
}
