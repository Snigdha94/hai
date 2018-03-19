using namespace std;
#include<iostream>
int main()
{
int a,b,c,n,s;

do
{
cout<<"choose the operation 1=add,2=diff,3=product,4=div\nenter ur choice";
cin>>n;
switch(n)
{
case1:
cout<<"\nentr the two numbers";
cin>>a>>b;
c=a+b;
cout<<"sum is"<<c;
break;
case2:
cout<<"\nentr the two numbers";
cin>>a>>b;
c=a-b;
cout<<"diff is"<<c;
break;
case3:
cout<<"\nentr the two numbers";
cin>>a>>b;
c=a*b;
cout<<"product is"<<c;
break;
case4:
cout<<"\nentr the two numbers";
cin>>a>>b;
c=a/b;
cout<<"div is"<<c;
break;
default:
cout<<"invalid";
break;
}
cout<<"do you want to continue if yes 1,if no 0";
cin>>s;
}
while(s==1);
}

