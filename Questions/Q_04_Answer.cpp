#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>

#define pi acos(-1)
using namespace std;


//Crie uma classe eq2grau que tenha 4 variáveis-membro privadas, sendo 2 para a parte real (ri) e 2
//para a parte imaginária (mi) dos zeros de uma equação do 2º grau (formando então os números
//complexos ri+jmi, em que 1<=i <=2). Crie uma função que calcule os zeros da equação ax2+bx+c em
//que a, b e c sejam os parâmetros formal de entrada dessa função. Escreva um programa que crie um
//objeto do tipo eq2grau, solicite ao usuário os valores de a, b e c e mostre os zeros da equação.

class eq2grau{
    int res,i,u;
    
    public:
    void set_resistor(int r){res = r;}
    void set_tensao(int i){u = res*i;}
    void set_current(int u){i = u/res;}
    int get_resistor(void){return res;}
    int get_current(void){return i;}
    int get_tensao(void){return u;}
};

int main(){
int s,r,u,i;



return 0;
}