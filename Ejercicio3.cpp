#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    //cinco notas, cada nota vale 20%
    int e;
    int f;
    
    char x[50];
    cout<<"Ingrese el numero de estudiantes: ";
    cin>>e;
    
    for(f=1;f<e;f++)
    {

        cout<<"Ingrese nombre de estudiante "<<f<<": ";
        cin>>x;

        double n[5];
        int i;

        cout<<"La notas del estudiante "<<x<<" es: "<<endl;
        for(i=0; i<5; i++)
             {
             cout<<"Ingrese la nota numero "<<i+1<<": ";
                cin>>n[i];
             }
    
        int o;
        o=0;

        for(i=0; i<5; i++)
        {
            o=o+n[i];
        }

        double o1;

        o1=o/5;

        cout<<"El promedio del estudiante "<<x<<" es de: "<<o1<<endl;
        if(o>=6.5)
        {
            cout<<"El estudiante "<<x<<" aprobo la materia"<<endl;
        }
        else
        {
            cout<<"El estudiante "<<x<<" reprobo la materia"<<endl<<endl;
        }
        

    }
}