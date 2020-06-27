#include "iostream"
#include "array"
using namespace std;

int main()
{
    int x[25]={133, 144, 165, 121, 120, 122, 124, 131, 134, 130, 122, 140, 115, 111, 120, 118, 119, 123, 129, 132, 142, 124, 123, 124, 140};
    cout<<"Las alturas de los estudiantes son: "<<endl;
    int i;
    for(i=0; i<25; i++)
    {
        cout<<"Estudiante numero "<<i+1<<": "<<x[i]<<endl;
    }
    double a;
    a=0;
    for(i=0; i<25; i++)
    {
        a=a+x[i];
    }
    double b;

    b=a/25;

    cout<<"El promedio es igual a: "<<b<<endl;

    int n,m;
    n=0;
    m=0;

    for(i=0; i<25; i++)
    {  
        if(x[i]<b)
        {
            n=n+1;
        }
        else
        {
            m=m+1;
        }
    }   
    cout<<"El numero de estudiantes por encima de la media es: "<<n<<endl;
    cout<<"El numeor de estudiantes por debajo de la media es: "<<m<<endl;
}