#pragma once




class Vertice{
    public: 

    Vertice(); 
    bool obtenerVertice(Vertice& , const int numVertices);     
    bool agregarVertice(Vertice& , const int numVertices);
    bool eliminarVertice(const int numVertices); 

    private: 
    int _numVertices;
    int _numVertices2;
    
  



}; 




