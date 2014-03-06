#include <iostream>

using namespace std;

int main()
{
    int grado,iteraciones,error;
    cout<<"Grado del polinomio"<<endl;
    cin>>grado;
    int polinomio[grado];
    for(int i=grado;i>=0;i--)
    {
        cout<<"Coeficiente x^"<<i<<" ";
        cin>>polinomio[i];
    }
    cout<<endl;
    cout<<"Maximo de iteraciones: ";
    cin>>iteraciones;
    cout<<endl;
    cout<<"Toleracia de error: ";
    cin>>error;

    return 0;
}
