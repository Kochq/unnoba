public class Main {
    public static void main(String[] args) {
        Cooperativa cooperativa = new Cooperativa();

        Colectivo colectivo = new Colectivo(50, 1000, "Mercedes Benz", "ABC123");
        Chofer chofer = new Chofer("Juan", colectivo);

        Colectivo colectivo2 = new Colectivo(40, 2000, "Scania", "DEF456");
        Chofer chofer2 = new Chofer("Pedro", colectivo2);

        Colectivo colectivo3 = new Colectivo(30, 3000, "Volvo", "GHI789");
        Chofer chofer3 = new Chofer("Carlos", colectivo3);

        cooperativa.getChoferes().add(chofer);
        cooperativa.getChoferes().add(chofer2);
        cooperativa.getChoferes().add(chofer3);

        System.out.println("Colectivo con mayor kilometraje: " + cooperativa.mayorKilometro().getPatente());

        Chofer choferViaje = cooperativa.realizarViaje(45, 500);
        System.out.println("Chofer que realizó el viaje: " + choferViaje.getNombre());
    }
}
