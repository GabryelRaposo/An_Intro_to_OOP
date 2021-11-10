#include <iostream>
#include <sstream>
#include <cmath>
#define pi acos(-1)
using namespace std;

//Faça um programa que crie uma classe circulo e elabore funções-membros dessa classe que calcule
//sua área e seu perímetro. Após crie um objeto dessa classe e solicite ao usuário o valor do raio
//(sendo essa uma variável-membro) e mostre a área e perímetro. Crie uma função-membro que seta o
//valor do raio e faça com que o raio do objeto seja sempre igual a 2,5 ao ser criado.

class circulo {
    float p,a,x;
    public:

    circulo(){x = 2.5;}
    void set_perimetro(float x){p = 2*pi*x;}
    void set_area(float x){a = pi*pow(x,2);}

    float get_perimetro(void){return p;}
    float get_area(void){return a;}
};
int main() {

    float r;
    circulo cir;

    cout << "Digite o Valor do Raio do seu circulo" <<endl;
    cin >> r;

    cir.set_perimetro(r);
    cir.set_area(r);
    
    cout << "A area é " << cir.get_area() << "O perimetro é " << cir.get_perimetro() << endl;



    return 0;
}
