// Conway's Game of Life - life.cpp (uploaded by assistant)
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;
const int CAPACIDAD=40;
int Contador=0;
void mostrar(char** p);
void generacion(char** p,char** q);
int vecinos(char** p,int fil,int col);
void inicializar(char** p);

int main(){
    char** life=new char*[CAPACIDAD];
    for(int i=0;i<CAPACIDAD;i++){
        life[i]=new char[CAPACIDAD];
    }
    inicializar(life);

    char** copia=new char*[CAPACIDAD];
    for(int i=0;i<CAPACIDAD;i++){
        copia[i]=new char[CAPACIDAD];
    }
    inicializar(copia);

    char jugada[80];
    cout<<"Ingresar jugada: ";
    cin>>jugada;

    ifstream fin(jugada);
    assert(fin.is_open());

    char ch;
    for(int i=0;i<CAPACIDAD;i++){
        for(int j=0;j<CAPACIDAD;j++){
            if((ch=fin.get())!=10){
                life[i][j]=ch;
            }
        }
    }

    fin.close();

    ofstream fout("respaldo",ios::trunc);
    assert(fout.is_open());fout.close();

    mostrar(life);cout<<endl;
    generacion(life,copia);

    for(int i=0;i<CAPACIDAD;i++){
        delete[] copia[i];
    }
    delete[] copia;

    for(int i=0;i<CAPACIDAD;i++){
        delete[] life[i];
    }
    delete[] life;
    return 0;
}

void inicializar(char** p){
    for(int i=0;i<CAPACIDAD;i++){
        for(int j=0;j<CAPACIDAD;j++){
            p[i][j]=' ';
        }
    }
}

void mostrar(char** p){
    ofstream fout("respaldo",ios::app);
    assert(fout.is_open());
    fout<<"Generacion "<<Contador++<<":\n";
    for(int i=0;i<CAPACIDAD;i++){
        for(int j=0;j<CAPACIDAD;j++){
            cout<<p[i][j]<<" ";
            fout<<p[i][j]<<" ";
        }
        cout<<endl;
        fout<<endl;
    }
    fout.close();
}

void generacion(char** p,char** q){
    cout<<"Mostrar siguiente generacion?\n(Introduzca cualquier caracter para continuar o escriba no)"<<endl;
    char respuesta[100];
    cin>>respuesta;
    if((respuesta[0]=='n'|| respuesta[0]=='N')&& respuesta[1]=='o'){
        return;
    }
    for(int i=0;i<CAPACIDAD;i++){
        for(int j=0;j<CAPACIDAD;j++){
            q[i][j]=p[i][j];
        }
    }
    for(int i=1;i<CAPACIDAD-1;i++){
        for(int j=1;j<CAPACIDAD-1;j++){
            if (q[i][j]=='*'){
                if(vecinos(q,i,j)<2 || vecinos(q,i,j)>3){ //muertes
                    p[i][j]=' ';
                }
            }
            else{
                if(vecinos(q,i,j)==3){  //nacimientos
                    p[i][j]='*';
                }
            }
        }
    }
    mostrar(p);cout<<endl;
    generacion(p,q);
}

int vecinos(char** p,int fil,int col){
    int cont=0;
    if(p[fil][col-1]=='*') cont++;
    if(p[fil][col+1]=='*') cont++;
    if(p[fil-1][col]=='*') cont++;
    if(p[fil+1][col]=='*') cont++;
    if(p[fil+1][col+1]=='*') cont++;
    if(p[fil-1][col-1]=='*') cont++;
    if(p[fil-1][col+1]=='*') cont++;
    if(p[fil+1][col-1]=='*') cont++;
    return cont;
}

// Conway's Game of Life - life.cpp (copy for include)
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;
const int CAPACIDAD=40;
int Contador=0;
void mostrar(char** p);
void generacion(char** p,char** q);
int vecinos(char** p,int fil,int col);
void inicializar(char** p);

int main(){
    char** life=new char*[CAPACIDAD];
    for(int i=0;i<CAPACIDAD;i++){
        life[i]=new char[CAPACIDAD];
    }
    inicializar(life);

    char** copia=new char*[CAPACIDAD];
    for(int i=0;i<CAPACIDAD;i++){
        copia[i]=new char[CAPACIDAD];
    }
    inicializar(copia);

    char jugada[80];
    cout<<"Ingresar jugada: ";
    cin>>jugada;

    ifstream fin(jugada);
    assert(fin.is_open());

    char ch;
    for(int i=0;i<CAPACIDAD;i++){
        for(int j=0;j<CAPACIDAD;j++){
            if((ch=fin.get())!=10){
                life[i][j]=ch;
            }
        }
    }

    fin.close();

    ofstream fout("respaldo",ios::trunc);
    assert(fout.is_open());fout.close();

    mostrar(life);cout<<endl;
    generacion(life,copia);

    for(int i=0;i<CAPACIDAD;i++){
        delete[] copia[i];
    }
    delete[] copia;

    for(int i=0;i<CAPACIDAD;i++){
        delete[] life[i];
    }
    delete[] life;
    return 0;
}

void inicializar(char** p){
    for(int i=0;i<CAPACIDAD;i++){
        for(int j=0;j<CAPACIDAD;j++){
            p[i][j]=' ';
        }
    }
}

void mostrar(char** p){
    ofstream fout("respaldo",ios::app);
    assert(fout.is_open());
    fout<<"Generacion "<<Contador++<<":\n";
    for(int i=0;i<CAPACIDAD;i++){
        for(int j=0;j<CAPACIDAD;j++){
            cout<<p[i][j]<<" ";
            fout<<p[i][j]<<" ";
        }
        cout<<endl;
        fout<<endl;
    }
    fout.close();
}

void generacion(char** p,char** q){
    cout<<"Mostrar siguiente generacion?\n(Introduzca cualquier caracter para continuar o escriba no)"<<endl;
    char respuesta[100];
    cin>>respuesta;
    if((respuesta[0]=='n'|| respuesta[0]=='N')&& respuesta[1]=='o'){
        return;
    }
    for(int i=0;i<CAPACIDAD;i++){
        for(int j=0;j<CAPACIDAD;j++){
            q[i][j]=p[i][j];
        }
    }
    for(int i=1;i<CAPACIDAD-1;i++){
        for(int j=1;j<CAPACIDAD-1;j++){
            if (q[i][j]=='*'){
                if(vecinos(q,i,j)<2 || vecinos(q,i,j)>3){ //muertes
                    p[i][j]=' ';
                }
            }
            else{
                if(vecinos(q,i,j)==3){  //nacimientos
                    p[i][j]='*';
                }
            }
        }
    }
    mostrar(p);cout<<endl;
    generacion(p,q);
}

int vecinos(char** p,int fil,int col){
    int cont=0;
    if(p[fil][col-1]=='*') cont++;
    if(p[fil][col+1]=='*') cont++;
    if(p[fil-1][col]=='*') cont++;
    if(p[fil+1][col]=='*') cont++;
    if(p[fil+1][col+1]=='*') cont++;
    if(p[fil-1][col-1]=='*') cont++;
    if(p[fil-1][col+1]=='*') cont++;
    if(p[fil+1][col-1]=='*') cont++;
    return cont;
}
