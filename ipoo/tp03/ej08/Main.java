package tp03.ej08;

import tp01.ej06.Clima;

import java.util.Date;

public class Main {
    public static void main(String[] args) {
        EstacionMeteorologica estacion = new EstacionMeteorologica();

        Date d1 = new Date(System.currentTimeMillis() - 1000 * 60 * 60 * 24); // 24 horas atras
        Date d2 = new Date(System.currentTimeMillis() - 1000 * 60 * 60 * 12); // 12 horas atras
        Date d3 = new Date(System.currentTimeMillis() - 1000 * 60 * 60 * 6); // 6 horas atras

        Clima clima1 = new Clima("Buenos Aires", "Buenos Aires", "Argentina", 25, 20, 30, "C", 1013, 10, "N", 50, new Date(), 10);
        Clima clima2 = new Clima("Cordoba", "Cordoba", "Argentina", 20, 15, 25, "C", 1013, 10, "N", 50, d1, 10);
        Clima clima3 = new Clima("Rosario", "Santa Fe", "Argentina", 15, 10, 20, "C", 1013, 10, "N", 50, d2, 10);
        Clima clima4 = new Clima("Mendoza", "Mendoza", "Argentina", 10, 5, 15, "C", 1013, 10, "N", 50, d3, 10);

        estacion.agregarClima(clima1);
        estacion.agregarClima(clima2);
        estacion.agregarClima(clima3);
        estacion.agregarClima(clima4);

        System.out.println("Climas ordenados por fecha:");
        estacion.ordenarClimaPorFecha();
        for (Clima clima : estacion.getHistorialClimas()) {
            System.out.println(clima.getCiudad() + " - " + clima.getUltimaActualizacion());
        }
    }
}
