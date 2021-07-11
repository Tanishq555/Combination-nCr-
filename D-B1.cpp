#include <iostream>
#include <math.h>
using namespace std;

int fac(int n){
    int fact=1;
    for (int i =2; i <=n; i++)
    { 
       fact=fact*i;
    } return fact;
   
    
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=fac(a)/(fac(b)*fac(a-b));
    cout<<ans<<endl;
}