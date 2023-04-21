
#include <iostream> 
using namespace std;


// class Quote{
//     public:
//         string isbn() const;
//         virtual double net_price(int size_t_n) const;
// };

// class Bulk_quote:public Quote{
//     double net_price(int size_t_n) const override;
// };


class Element { //Clase Abstracta (linea 38)
    
    int id = 0; //para crear un constructor por parametros
    //Un constructor nunca puede ser virtual

public:
    Element(int id); 
    Element() = default;
    virtual ~Element() = default; 
    //virtual ~Element() = 0; 

    virtual ostream& show(ostream& out) = 0;  // Chequear si esto esta bien ?? 
    

};
//
class Media:public Element{ //Declaracion de herencia, hasta aqui tambien es abstracta
    string file_name;
    public:
    Media() = default;
    Media(int id, string f ): Element(id), file_name(f){};
    virtual ~Media() = default;
    

   //para que deje de ser virtual: sobreescritura (se define el metodo virtual de la clase padre)
    ostream& show(ostream& out) override {
        cout << "Media" << file_name << endl;
        return out;
    }; 
};

int main() {
    Media m1(1,"file.png");
    //m1.show(cout);
    return 0;
}