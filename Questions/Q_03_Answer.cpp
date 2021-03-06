
#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>

#define pi acos(-1)
using namespace std;


//Crie uma classe resistor que tenha como membro privado o valor de sua resistência e crie funções
//para cálculo da tensão para uma corrente e para cálculo da corrente para um tensão. Escreva um
//programa que, por meio de um objeto do tipo resistor, calcule a tensão para tensão para uma corrente
//dada pelo usuário e a corrente para um tensão dada pelo usuário. O valor da resistência deve ser
//dada pelo usuário.

class resistor{
    float res,i,u;
    
    public:
    void set_resistor(float r){res = r;}
    void set_tensao(float i){u = res*i;}
    void set_current(float u){i = u/res;}
    float get_resistor(void){return res;}
    float get_current(void){return i;}
    float get_tensao(void){return u;}
};

int main(){
float r,u,i;
int s;

resistor res;
cout << "Digite o valor da sua resistência" << endl;
cin >> r;
res.set_resistor(r);
cout << "Você deseja calcular uma corrente (0) ou uma tensão?(1) " << endl;
cin >> s;

switch (s)
{
case 0:
    cout << "Qual a tensão sob esse resistor? " << endl;
    cin >> u;
    res.set_current(u);
    cout << "O valor da corrente é " << res.get_current() << endl;
    break;

case 1:
    cout << "Qual a corrente sob esse resistor? " << endl;
    cin >> i;
    res.set_tensao(i);
    cout << "O valor da tensão é " << res.get_tensao() << endl;
    break;
}


return 0;
}







