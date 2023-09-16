//No me hago cargo de esto, lo hizo cidoni
#include <iostream>
using namespace  std;
int localidad,opcion,encuesta[20][6]={0},mayor=0,argentinos[20],dl=0;
int main(){
    while (1){                                                              //Guardo todo
        cout<<"**Encuesta para lanzar un nuevo producto al mercado**"<<endl;
        cout<<"Por favor ingrese el numero su localidad (de la n0 a la n19): ";
        cin>>localidad;
        cout<<"Por favor elija las variantes del producto (opciones dadas del 0 al 4) o el numero 5 para votar ninguna, elija el 6 para ver las estadisticas finales: ";
        cin>>opcion;
        if(opcion<0 or opcion>5){           //condicion de corte
            break;
        }
        encuesta[localidad][opcion]+=1;
    }
    for(int i=0;i<20;i++){           //A
        for(int j=0;j<6;j++){
            if(mayor<encuesta[i][j]){
                mayor=j;
            }
        }
        if (mayor!=0){
            cout<<"La opcion mas elegida en la localidad: "<<i<<" fue la opcion: "<<mayor<<endl;
            }
        else{
            cout<<"En la localidad: "<<i<<" no hubo votantes. (como en argentina xd)"<<endl;
            }
        if(mayor==5){           //B
            argentinos[dl]=i;
            dl++;
        }
        mayor=0;
    }
    for(int i=0;i<dl;i++){
        cout<<"una de las localidades donde gano la opcion ninguno fue: "<<argentinos[i]<<endl;
    }
    return 0;
}
