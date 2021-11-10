#include <iostream>
#include <sstream>
using namespace std;

class Student {
    int x,y;
    string a,b;
    public:
    void set_age(int age){x = age;}
    void set_standard(int standard) {y = standard;}
    void set_first_name(string first){ a = first;}
    void set_last_name(string last){ b = last;}

    int get_age(void){return x;}
    int get_standard(void){return y;}
    string get_first_name(void){return a;}
    string get_last_name(void){return b;}

    string to_string(void){
        string result = std::to_string(x) +','+get_first_name()+','+get_last_name()+','+ std::to_string(y);
        return result;
    }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
