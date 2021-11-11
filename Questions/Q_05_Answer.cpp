#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <string>
#define pi acos(-1)
using namespace std;


//Crie uma classe aluno que tenha como variáveis-membro: nome, idade e CRE, e que, sendo essas
//variáveis privadas, só aceitem dados com verificação de conteúdo (por exemplo, CRE deve estar
//entre 0 e 10; idade sempre positiva, etc.). Após isso, crie 2 objetos dessa classe, faça o cadastro de
//alguns alunos e mostre na tela o cadastro.


class aluno{
    int age;
    float cra;
    string name;

    public:
    
    void set_age(int a){
        while (a<0){
            cout << "Digite um novo valor, a idade não pode ser negativa" << endl;
            cin >> a;
        };
        age = a;
        } 
    void set_cre(float b){
        while (b<0 or b>10){
            cout << "Digite um novo valor, o cra tem que estar entre 0 e 10" << endl;
            cin >> b;
        };
        cra = b;}; 

    void set_name(string nome){
        name = nome;
    } 
    int get_age(void){return age;}   
    float get_cre(void){return cra;}   
    string get_name(void){return name;}   
    };

int main(){
int s,id = 1;
float cr;
string k;

aluno al1,al2;

cout << "Digite o nome do aluno, a idade e o cra" << endl;
cin >> k;
al1.set_name(k);
cin >> id;
al1.set_age(id);
cin >> cr;
al1.set_cre(cr);

cout << "Digite o nome do segundo aluno, a idade e o cra" << endl;
cin >> k;
al2.set_name(k);
cin >> id;
al2.set_age(id);
cin >> cr;
al2.set_cre(cr);

cout << "Assim, os alunos digitados foram:" << endl;
cout << "Aluno 1: " << al1.get_name() << ", Idade: " << al1.get_age() <<", cra: " << al1.get_cre() << endl;
cout << "Aluno 2: " << al2.get_name() <<", Idade: " << al2.get_age() <<", cra: " << al2.get_cre() << endl;
return 0;
}