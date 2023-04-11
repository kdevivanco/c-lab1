#include <iostream>
#include "tuit.h"

int main() {
    Tuit t1(1,"user","text");
    Emoji* e1 = new Emoji(1, "XD"); //* puntero
    Media* m1 = new Media(2, "myfile.jpg");
    Poll* p1 = new Poll(3, "Partido", ["Espana","Argentina"], 1, 24, 0);

    t1
        .add_element(e1)
        .add_element(m1)
        .add_element(p1)
        .show(cout)




    //std::cout << "Hola Mundo" << std::endl;
    return 0;
}
