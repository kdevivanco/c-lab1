//
// Created by Kayla de Vivanco on 04/10/2023
//

#include <iostream>
#include <string>
#include <vector>
#include "tuit.h"

using std::string;
using std::vector;
using std::ostream;
using namespace std;

Tuit::Tuit(string _user_name, string _text) {
    user_name = _user_name;
    text = _text;
    return; 
}

ostream& operator<<(ostream& out,  Tuit& tuit){
    out << "===============" << endl;
    out << tuit.getUsername() << endl;
    out << tuit.getText() << endl;
    return out;
}

ostream& show(ostream& out){
    out << "===============" << endl;
    out << user_name << endl;
    out << text << endl;
    return out;
}


// Media::Media(int id, string file_name){
//    Element(id), file_name(file_name){ //Element inicializa a id porque es una var privada de Element.
//     }
// //}

Tuit &Tuit::add_element(Element* element){
    this->elements.push_back(element);
    return *this;
}

//ostream &Media::show(ostream &out){
//    return out;
//}

//
//void question_1(){
//
//}


int main(){
    Tuit tuit1("kdevivanco", "hola mundo");
    tuit1.show(cout);
}