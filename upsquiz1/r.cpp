#include <iostream>
using namespace std;
int main () {
    int a;
    cin >> a;
    int a1, a2, a3, a4, a5;
    int pr, sum, b;
    if (a<10) {
        b=a+a;
    }
    else if (a>=10 && a<100) {
        a1=a/10;
        a2=a%10;    
        pr=a1*a2;
        sum=a1+a2;
        b=pr+sum;
    }
    else if (a>=100 && a<1000) {
        a1=a/100;
        a2=(a/10)%10;
        a3=a%10;
        sum=a1+a2+a3;
        pr=a1*a2*a3;
        b=sum+pr;
        //cout<< a1 << " " << a2 << " " << a3 << " " << sum << " " << pr;
    }
    else if (a>=1000 && a<10000) {
        a1=a/1000;
        a2=(a/100)%10;
        a3=(a/10)%10;
        a4=a%10;
        sum=a1+a2+a3+a4;
        pr=a1*a2*a3*a4;
        b=sum+pr;
    }
    else if (a>=10000) {
        a1=a/10000;
        a2=(a/1000)%10;
        a3=(a/100)%10;
        a4=(a/10)%10;
        a5=a%10;
        sum=a1+a2+a3+a4;
        pr=a1*a2*a3*a4;
        b=sum+pr;
    }
    cout << b;


}