# POC-Casa
CASA DE LEGO

El programa permite simular la creacion por piezas de una casa, con reglas para la construccion de la misma.

REGLAS DE CONSTRUCCION

    1. El piso es la base, va antes de cualquier otra pieza de la casa y no se podrá seguir construyendo a no ser que se haya colocado ya el piso.

    2. Las paredes se pueden agregar luego del piso. Pueden existir muntiples paredes, pero todas dependen del piso.

    3. Las puertas se colocan luego de haber colocado al menos una pared, no se pueden construir puertas sin paredes.

    4. El techo es la parte final de la casa, deben existir todas las piezas anteriores para poder colocar el techo de la casa.

REGLAS DE ADICION DE PIEZAS

Se utilizan colas y pilas para agregar piezas a la casa por construir. PARA AMBAS ESTRUCTURAS SE PUEDEN AÑADIR LAS PIEZAS SIN IMPORTAR EL ORDEN.

PILAS y COLAS

Cuando se agrega una pieza a la pila o a la cola, el programa verifica si tiene una dependencia. Si la pieza tiene una dependencia que aún no se ha construido, el programa construirá automáticamente la dependencia antes de agregar la pieza actual.