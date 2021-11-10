#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>

#define pi acos(-1)
using namespace std;

//Escreva um programa que emule um globo de sorteio de bolas numeradas para a megasena. Crie
//uma classe globo que tenha 6 variáveis privadas para os números sorteados e uma função que
//selecione 6 números de 1 a 60 de forma pseudoaleatória. Faça uma função que mostre os números
//sorteados. Providencie que ao criar um objeto, as variáveis sejam iguais a -1. Por fim, crie um objeto
//da classe globo e solicite ao usuário quantas rodadas deseja executar. De acordo com esse valor,
//mostre os números sorteados.


class globo{
    int a,b,c,d,e,f,i;
    int v[6];
    public:
    globo(){a=b=c=d=e=f=-1;}
    void set_numbers(void){
        v[a,b,c,d,e,f];
        for (i=0;i<6;i++){
            v[i] = 1+ rand()%60;}}
    void get_numbers(void){
        for (i=0;i<6;i++){
            cout << v[i] <<endl;}
    }
    
};

int main(){
    globo g;
    int k = 1;   
    while (true){
    cout << "Vamos ao sorteio...?" <<endl;
    g.set_numbers();
    g.get_numbers();

    cout << "Você desejaria um novo sorteio de números? Caso sim digite (1), caso contrário digite qualquer outra tecla" << endl;
    cin >> k;
    if (k != 1){break;}}
    return 0;
}