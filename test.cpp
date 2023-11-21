#include <iostream>
using namespace std;
int main ()
{
setlocale(0,".1251");
double y, x; 
int n; 
cout<<"Введіть значення х=";
cin>>x; 
if(x <= –4) { y=x*x–8; n=1;}
else if(–4<x && x<0){ y=3*x–2; n=2;}
 else { y=2–x; n=3;}
cout<<"Результат y="<< y <<endl;
cout<<"Виконано умову "<<n<<endl;
system ("pause>>void"); 
return 0;
}
