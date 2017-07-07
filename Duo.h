#include<bits/stdc++.h>
using namespace std;
///codigo por Colque C
class Duo
{
public:
    int n;
    int m,d,f,j,k;
    int dis,hip;
    double z;
public:
    Duo(int n, int m){
        this->n = n;
        this->m = m;
    }
public:
    float hallarDistancia(){
        dis = m - n;
        cout<<dis<<endl;
    }
     double hallarHipotenusa(){
        hip = sqrt((n*n)+(m*m));
        cout<<hip<<endl;
    }
    int imprimirRango(){  int a=n , s=m;
        while(a<=s)
        {
            cout<<a<<" ";   a++;
        }
    }
    int mostrarImpares()
    {   int d=this->n, f= this->m;
        while(d<=f)
        {  if(d%2!=0)
            {
                cout<<d<<" ";
            }d++;
        }
    }
     int mostrarPares()
    { int g=n, h=m;
        while(g<=h)
        { if(g%2==0)
            {
                cout<<g<<" ";
            }g++;
        }
    }
    int primosRango()
    { int j=this->n, k=this->m;
        while(j<=k)
        {int cont = 0;
            for(int i=1; i<=j; i++)
            {
                if(j%i==0)
                    cont++;
            }
            if (cont==2)
            {
                cout<<j<<" ";
            }
            cont = 0;
            j++;
        }
    }
};
