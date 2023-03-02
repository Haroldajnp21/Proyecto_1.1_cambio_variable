
#include <iostream>
#include <stdlib.h>

using namespace std;


int main ()
{
    int a,b,t;
    cout <<"Ingrese a:";
    cin >> a;
    cout <<"Ingrese b:";
    cin >> b;

    t = a;
    a = b;
    b = t;
    
    cout <<"Los valores intercambiado son:" << endl;
    cout <<"a=" << a << endl;
    cout <<"b=" << b; 
    //haci se hace el intercambio de valores 
}