#include <iostream>
#include <cmath>
using namespace std;

bool controllo(float a)
{
    double fa;
    fa=pow(a,2)*cos(a)+1;
    if(fa==0) {
        return true;
    }
    return false;
}
bool funz(float a,float b)
{
float fa,fb;
fa=pow(a,2)*cos(a)+1;
fb=pow(b,2)*cos(b)+1;
if((fa*fb)<0)
    {
    return true;
    }
return false;
}
int main() {
   int c;
    float a,b,x;
    while(!funz(a,b)){
        cout << "inserire estremi" << endl;
        cin >> a >> b;
    }
while(true) {
    x = (a + b) / 2;
    if (controllo(x)) {
        x=x*10000;
        c=x;
        x=c;
        cout << x/10000 << endl;
        return 0;
    }
    else
    {
    if(funz(a,x))
    {
     b=x;
    }
    else if(funz(x,b))
    {
    a=x;
    }
    if(abs((b-a)/2)<1*pow(10,-6))
    {
        x=x*10000;
        c=x;
        x=c;
        cout << x/10000 << endl;
        return 0;
    }
    }
}

}

    return 0;
}
