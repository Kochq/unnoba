//No me hago cargo de esto, lo hizo cidoni
#include <iostream>
using namespace  std;
int Tuwin=0,Forella=1,Doriath=2,Aerilon=3,infoFestejos[4][3],aux=0;   //infofestejos[ciudades][dias]
int main(){
    //A
    cout<<"Bienvenidos al festejo del cumpleanios del rey, donde el n de ciudades es: Tuwin=0,Forella=1,Doriath=2,Aerilon=3"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<"ingrese la cantidad de invitados de la ciudad "<<i<<", dia: "<<j+1<<"> ";
            cin>>infoFestejos[i][j];
        }
    }
    //B
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            aux+=infoFestejos[i][j];
        }
        cout<<"Los invitados que se esperan en total en la ciudad "<<i<<" son: "<<aux<<endl;
        aux=0;
    }
    //C
    infoFestejos[3][0]-=50;
    cout<<"Se bajaron 50 invitados al primer dia de Aerilon, ahora solo asistiran: "<<infoFestejos[3][0]<<endl;
    //D
    cout<<"Ingrese el N de ciudad, (Tuwin=0,Forella=1,Doriath=2,Aerilon=3), para cer la cantidad de invitados por dia: ";
    cin>>aux;
    cout<<"La ciudad: "<<aux<<" tiene: "<<endl;
    for(int i=0;i<3;i++){
        cout<<infoFestejos[aux][i]<<" invitados el dia "<<i+1<<endl;
    }
    return 0;
}
