//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT1_TUIT_V2023_1_TUIT_H
#define PROG3_UNIT1_TUIT_V2023_1_TUIT_H

#include <string>
#include <vector>

using std::string;
using std::vector;
using std::ostream;

class Element; //declaracion Forward -> para usarla en Tuit

class Tuit {
    string user_name;
    string text;
    vector<Tuit> replies;
    vector<Element*> elements; //Por que el *
};

class Element { //Clase Abstracta (linea 31)
    int id=0; //para crear un constructor por parametros
    //Un constructor nunca puede ser virtual

public:
    Element(int id); //Constructor por parametros
    //El destructor si debe de colocarse de forma virtual para hacer herencia
    virtual ~Element() = default; //Ese ~ hace que sea virtual
    virtual ostream& show(ostream& out) = 0; //Metodo Abstracto , hasta antes de esto la clase era virtual. Ahora es abstracta
};

class Media: public Element{ //Declaracion de herencia, hasta aqui tambien es abstracta
    string file_name;

public:
    Media(int id,string file_name); //Se debe incluir el constructor de la clase padre. Hereda "obligaciones"
    //para que deje de ser virtual: sobreescritura (se define el metodo virtual de la clase padre)
    ostream& show(ostream& out) override; //se elimina el virtual y se escribe override
};

class Emoji: public Element{
    string symbol;
    int size;

public:
    Emoji(int id,int size,string symbol);
    ostream& show(ostream& out) override;
};

class Poll: public Element{
    string title;
    vector<string> choices;
    int days;
    int hours;
    int minutes;

public:
    Poll(int id,string title, vector<string> choices, int days, int hours, int minutes);
    ostream& show(ostream& out) override;
};

void question_1();

#endif //PROG3_UNIT1_TUIT_V2023_1_TUIT_H
