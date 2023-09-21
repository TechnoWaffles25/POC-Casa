#include <Casa.h>

int main() {
    Casa myCasa;

    Piso piso;
    Pared pared1(&piso); // Las paredes dependen del piso
    Pared pared2(&piso);
    Puerta puerta(&pared1); // La puerta depende de una pared
    Techo techo(&puerta); // El techo depende de la puerta

    myCasa.addPieceToStack(&pared2);
    myCasa.addPieceToStack(&puerta);
    myCasa.addPieceToStack(&techo);
    myCasa.addPieceToQueue(&piso);

    // Ensamblar la casa utilizando la pila (LIFO)
    std::cout << "Ensamblaje de la casa utilizando una pila (LIFO):" << std::endl;
    myCasa.assembleUsingStack();

    // Ensamblar la casa utilizando la cola (FIFO)
    std::cout << "\nEnsamblaje de la casa utilizando una cola (FIFO):" << std::endl;
    myCasa.assembleUsingQueue();

    return 0;

    return 0;
}



    