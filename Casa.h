#include <stack>
#include <queue>
#include <Piezas.h>
#include <map>


class Casa {
private:
    std::stack<Lego*> assemblyStack; // Pila para ensamblar
    std::queue<Lego*> assemblyQueue; // Cola para ensamblar
    std::map<Lego*, bool> assembledMap; // Mapa para rastrear si las piezas se han ensamblado

public:
    // Agregar una pieza de Lego a la pila
    void addPieceToStack(Lego* piece) {
        // Verificar si la pieza tiene una dependencia y si la dependencia ya se ha ensamblado
        Lego* dependency = piece->getDependency();
        if (dependency && !assembledMap[dependency]) {
            // La dependencia no se ha ensamblado, ensamblarla primero
            addPieceToStack(dependency);
        }
        
        // Agregar la pieza a la pila
        assemblyStack.push(piece);
        
        // Marcar la pieza como ensamblada en el mapa
        assembledMap[piece] = true;
    }

    // Agregar una pieza de Lego a la cola
    void addPieceToQueue(Lego* piece) {
        // Verificar si la pieza tiene una dependencia y si la dependencia ya se ha ensamblado
        Lego* dependency = piece->getDependency();
        if (dependency && !assembledMap[dependency]) {
            // La dependencia no se ha ensamblado, ensamblarla primero
            addPieceToQueue(dependency);
        }
        
        // Agregar la pieza a la cola
        assemblyQueue.push(piece);
        
        // Marcar la pieza como ensamblada en el mapa
        assembledMap[piece] = true;
    }

    // Ensamblar la casa usando la pila (LIFO)
    void assembleUsingStack() {
        while (!assemblyStack.empty()) {
            Lego* piece = assemblyStack.top();
            piece->assemble("Pila //");
            assemblyStack.pop();
        }
    }

    // Ensamblar la casa usando la cola (FIFO)
    void assembleUsingQueue() {
        while (!assemblyQueue.empty()) {
            Lego* piece = assemblyQueue.front();
            piece->assemble("Cola //");
            assemblyQueue.pop();
        }
    }
};

