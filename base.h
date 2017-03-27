# include "Listas.h"


struct nota {
    float  puntucacion ;
    float  porcentaje ;
}

struct asignatura{
    string nombre;
    int codigo ;
     Lista<nota> notas;
}

struct estudiante{
    string nombre;
    int codigo;
    int edad;
    Listas<notas>;
}



 void insertar_estudiante(string nombre,int codigo,  int edad){

 }


 class Gestor(){


    public:

        Gestor(){
            
        }
        void insertar_asignatura();
        void insertar_estudiante();
        void insertar_estudiante();


 }
