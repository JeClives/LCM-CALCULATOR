#include <iostream>
using namespace std;
void LCM(int b, int e){
int y; int c=0;
if (b<=0||e<=0)
{cout<<"Works only with positive numbers";}
else if (b==e){cout<<"The LCM is"<<e;}
else{
if(b>e){y=b;
        b=e;
        e=y;}
int t=e; int a=0;
do{a=0; for(int i=b; i<=e; i++)
{if((t%i)==0){a++;}} t++;}
while(a<(e-b+1));
cout<<"The LCM of numbers "<<b<<" through "<<e<<" is "<<t-1;}
}
int main() {
int B=1; int E=5;
cin>>B; cin>>E;
LCM(B, E);
    return 0;
}
