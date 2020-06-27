#include "iostream"
#include "cmath"

using namespace std;
int main()
{
    //clave del murcielago: m=0, u=1, r=2, c=3
   // i=4, e=5, l=6, a=7, g=8, 0=9

    char x[50];

    cout<<"Ingrese una palabra: ";
    cin>>x;

    int y;
    int i;

    i=sizeof(x);

    for(y=0;y<i;y++)
    {
        switch (x[y]){
            case 'm': cout<<"0"; break;
            case 'u': cout<<"1"; break;
            case 'r': cout<<"2"; break;
            case 'c': cout<<"3"; break;
            case 'i': cout<<"4"; break;
            case 'e': cout<<"5"; break;
            case 'l': cout<<"6"; break;
            case 'a': cout<<"7"; break;
            case 'g': cout<<"8"; break;
            case 'o': cout<<"9"; break;
            case ' ': return 0;
            default: cout<<x[y]; break;
        }
    }
}