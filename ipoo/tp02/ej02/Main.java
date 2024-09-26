package tp02.ej02;

import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Equipo e1 = new Equipo("rojo");
        Equipo e2 = new Equipo("azul");
        Equipo e3 = new Equipo("verde");
        Equipo e4 = new Equipo("violeta");
        Equipo e5 = new Equipo("amarillo");
        Equipo e6 = new Equipo("blanco");
        Equipo e7 = new Equipo("negro");
        Equipo e8 = new Equipo("naranja");

        Estadio es1 = new Estadio("estadito1", 1000);
        Estadio es2 = new Estadio("estadito2", 2000);
        Estadio es3 = new Estadio("estadito3", 3000);
        Estadio es4 = new Estadio("estadito4", 4000);

        Partido p1 = new Partido(e1, e2, es1, 45);
        Partido p2 = new Partido(e3, e4, es2, 20);
        Partido p3 = new Partido(e5, e6, es3, 1);
        Partido p4 = new Partido(e7, e8, es4, 100);

        ArrayList<Partido> partidos = new ArrayList<Partido>();
        partidos.add(p1);
        partidos.add(p2);
        partidos.add(p3);
        partidos.add(p4);

        Pelota coso = new Pelota(partidos);

        System.out.println(coso.montoRecaudado(coso.getPartidos().get(0)));
        System.out.println(coso.estadioConMayorCapacidad().getNombre());
        System.out.println(coso.cantidadTotalEspectadores());
        System.out.println(coso.montoTotalRecaudado());
    }
}
