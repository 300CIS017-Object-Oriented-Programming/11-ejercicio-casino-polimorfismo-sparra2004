## Preguntas teoricas (Respuestas)
1. Explique qué cosas del código fuente indican que la clase es una clase abstracta.

Una clase es abstracta cuando contiene al menos una función virtual. Esto obliga a que las clases derivadas implementen dicha función, y no se puede crear una instancia directamente de la clase abstracta.

2. ¿Qué implicaciones tiene esa decisión de diseño para este programa?. Explique.

por ejemplo en el codigo de gonzino se puede verificar. 

    virtual float calcularResultado(float gonzosApostar) = 0;

 En este caso es una clase abstracta ya que en el anterior codigo, primero se demuestra el polimorfismo cuando se coloca el virtual, ya en la parte cuando se coloca que la funcion es igualada a 0 (f(x) = 0) este método no tiene implementación aquí. Obligo a que las clases derivadas lo implementen.