/**TRADUCTOR DE ORACIONES DE ESPA�OL A INGLES SIMPLE.
SU TRABAJO ES TRADUCIR UNA ORACION ESCRITA POR TECLADO
EJEMPLO
ENTRADA                  SALIDA
Yo estoy muy cansado     I am very tired
Jesus te ama             Jesus love you
 */
#include<iostream>
#include <string.h>
#include <cstdio>
/**CODIGO POR COLQUE C*/
using namespace std;
int cuenta(const char *a){
    int c=0;
    while(*a)
    {
        while(isspace(*a))a++;
        c++;
        while(*a&& !isspace(*a))a++;
    }
    return c;
}
void traduccion(char *frase,int np){
    int z=0;
    string trad[np];
    string tex[50];
    cout<<"\n______ESPANOL_______A_______INGLES_______\n\n";
    string palabras[100][2] = {{"yo","I"},{"tu","you"},{"�l","he"},{"ella","she"},{"este","it"},{"muy","very"},
    {"nosotros","we"},{"ustedes","you"},{"ellos","they"},{"hola","hello"},{"como","how"},{"estas", "are you"},{"ama","loves you"},
    {"estoy","am"},{"bien","fine"},{"cansado","tired"},{"donde","where"},{"jesus","Jesus"},{"ni�o,child"},{"ciudad","city"},
    {"mi","my"},{"amo","love you"},{"quiero","love you"},{"eres","you are"},{"hombre","man"},{"amor","love"},
    {"leer","to read"},{"mucho","so much"},{"hermosa","beautiful"},{"extra�o","miss you"},{"necesito","meed you"},{"vida","life"}};
///cantidad de palabras
    char separador[] = " ";
    char *trozo = NULL;
    trozo = strtok(frase,separador);
    while (trozo != NULL){
        tex[z++] = trozo;
        trozo = strtok(NULL,separador);
    }
    int k=0,f=0;
    for(int i=0;i<np;i++){
        cout<<tex[i]<<" ";
    }
///bucle que busca y compara
    while (np-->0){
        for(int i=0;i<50;i++){
            for(int j=0;i<50;i++){

                if(palabras[i][0]==tex[f])
                {

                    trad[k] = palabras[i][1];
                    k++;
                    break;
                }
                break;
            }
        }
        f++;
    }
    cout<<"\t = \t";
    int it=0;
    while(k-->0){
        cout<<trad[it]<<" ";
        it++;
    }
    cout<<"\n____________________________________________\n";
}
void m(char *s){
    while(*s){
        *s=tolower(*s);
        s++;
    }
    //cout<<s;
}
int main()
{
    int contP=0;
    char frase[100];
    cout<<"Digite una frase en espanol: \n";
    cin.getline(frase,100);
    contP = cuenta(frase);
    m(frase);
    traduccion(frase,contP);
    return 0;
}
