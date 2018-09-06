#include <iostream>

using namespace std;

int main()
{
    int a,b,c,x,x1,y;
    cout<<"hola\n iniciamos el programa cual de ellos es mayor"<<endl;
    cout<<"ingresa tres numeros enteros"<<endl;
    cin>>a >>b>>c;
    if(a>b){
        if(a>c){
            cout<<"el mayor numero es "<<a<<endl;
        }
        else
        {
            cout<<"el mayor numero es "<<c<<endl;
        }
    }
    else if (b>c){
        cout<<" el maoyr numero es "<<b<<endl;
    }
    else
        cout<<"el mayor numero es "<<c<<endl;

    float n1,n2,n3,suma,mul,pro;
    cout<<"ingrese tus tre notas "<<endl;
    cin>>n1>>n2>>n3;
    suma=(n1+n2+n3);
    mul=(n1*n2*n3);
    pro=suma/3;
    cout<<"tu promedio es "<<pro<<endl;
    cout<<"ahora analizamos los numero si es par o no "<<endl;
    cout<<"ingresa un numero "<<endl;
    cin>>x1;
    if(x1%2==0){
        cout<<" es par "<<x1<<endl;
    }
    else
    {
        cout<<x1<<" es impar "<<endl;
    }
    cout<<"vamo a ver si un numero es multiplo de otro numero"<<endl;
    cout<<"ingresa dos numeros para analizar "<<endl;
    cin>>x>>y;
    if(x%y==0){
        cout<<y<<"  es multiplo de "<<x<<endl;
    }
    else{
        cout<<y<<" no es multiplo de "<<x<<endl;
    }
    return 0;
}
