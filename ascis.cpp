#include <iostream>

using namespace std;

int main()
{
    char n;
    char b='H';
    char c= 'M';
    char n1,l,num;
    cout<<"ingresa una letra "<<endl;
    cin>>n;
    cout<<n<<b<<c;
    cout << "Hello world!" << endl;
    cout<<"ingresa una letra o numero analizamo lo digitado si es numero o es letra"<<endl;
    cout<<"ungresa una letra o numero"<<endl;
    cin>>n1;
    char valor= static_cast<int>(n1);
    cout<<valor;
    if((valor>=65 && valor<=90 )||(valor>=97 && valor <=122))
    {
        cout<<"lo que ingresaste es una letra"<<endl;
    }
    else{
        cout<<" es un numero"<<endl;
    }
    cout<<"ingresa una letra "<<endl;
    cin>>l;
    char l1=static_cast<int>(l);
    if(l1>=96 && l1<=122){
        cout<<"su mayuscula es "<<(static_cast<char>(l1-32))<<endl;
    }
    else
    {
        cout<<"por favor la proxima vez escibe una letra"<<endl;
    }
    cout<<"ingresa un numero de 0 a 9"<<endl;
    cin>>num;
    if(static_cast<int>(num)>=48 && static_cast<int>(num)<=57 ){
        cout<<num<<"es un numero "<<endl;
    }
    else
    {
        cout<<"vuelva a iniciar "<<endl;
    }
    return 0;
}
