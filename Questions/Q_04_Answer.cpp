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

#include <iostream>
#include <cmath>
using namespace std;

class Eq2Grau{
    float r1, r2, m1, m2;
    float a, b, c;
    public:
        Eq2Grau(float coefA, float coefB, float coefC){
            a = coefA;
            b = coefB;
            c = coefC;
        }
        void showZero(){
            float delta = b*b - 4 * a * c;
            if (delta >= 0){
                r1 = (-b + sqrt(delta))/(2*a);
                r2 = (-b - sqrt(delta))/(2*a);
                m1 = 0;
                m2 = 0;
                cout << "Uma raiz é: " << r1 << endl;
                cout << "A outra raiz é: " << r2 << endl;
            } else {
                delta = delta * (-1);
                r1 = -b/(2*a);
                r2 = m2 = 0;
                m1 = (sqrt(delta))/(2*a);
                cout << "Uma raiz é: " << r1  << "+ j*" << m1 << endl; 
                cout << "A outra raiz é: " << r1  << "- j*" << m1 << endl; 
            }
        }
};

int main(){
    float a,b,c;
    cout << "Considerando a função f(x) = ax^2 + bx + c: " <<endl;;
    cout << "Digite o valor de a: " <<endl;
    cin >> a;
    cout << "Digite o valor de b: "<<endl;;
    cin >> b;
    cout << "Digite o valor de c: "<<endl;;
    cin >> c;
    cout << "f(x) = " << a << "x^2 + " << b << "x + " << c << endl;
    Eq2Grau eq(a, b, c);
    eq.showZero();
    return 0;
}