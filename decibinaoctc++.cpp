#include<iostream>
using namespace std;
void conversion(int n, intoper)
{
int c,rem,i=0,a[10];
while(n>=1){
rem=n%oper;
a[i]=rem;
n/=oper;
i++;
}
if(oper==2){
	cout<<"\nbinary number : ";
goto f;
}
else{
cout<<"\noctal number : ";
goto f;
}
f: for(c=i-1;c>=0;c--){
cout<<a[c];
}
}
int main()
{
int a;
cout<<"\nenter the decimal number : ";
cin>>a;
conversion(a,2);
conversion(a,8);
return 0;
}
