#include <iostream>

using namespace std;
int Division(int polinomio[],int grado,int x)
{
    int aux=polinomio[grado],division[grado];
    division[grado]=aux;
    for(int i=grado+1;i>=0;i--)
    {
        division[i]=polinomio[i]+aux;
        aux=0;
        aux=division[i]*x;
    }

    return division[0];
}

int main()
{
    int grado;
    int iteraciones,error;
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
    cout<<Division(polinomio,grado,error)<<endl;

    return 0;
}
