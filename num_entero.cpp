// Autor: Axel Molineros
// Fecha:2024-07-11
// 1) actividad en clase
// Diseñe la función que busca un número entero y devuelve la cantidad de veces que existe ese número en el vector.. 
// Diseñe la función que convierte un entero en su equivalente en binario. El resultado del número binario se debe guardar en un vector

#include<iostream>
using namespace std;
//funcion que busca el numero en el vector
int BuscaNumero(int vector[],int total,int num)
{
    int cont;
    for (int i = 0; i < total; i++)
    {
        if (vector[i]==num)//si existe el elemento
        cont++;//se incrementa el contador         
        
    }
    
    return cont;
}
int main()
{
    int vector[]={10,20,6,45,78,95,21,45,74,21,2,1,};
    int total= sizeof(vector)/sizeof(int);
    int num=21;
    int cont=BuscaNumero(vector,total,num);
    cout<<endl<<"El elemento "<<num<<" existe "<<cont<<" veces en el vector";

   return 0;
}