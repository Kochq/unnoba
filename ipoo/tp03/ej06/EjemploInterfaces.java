public class EjemploInterfaces {
    public static void main(String[] args) {
        Bicicleta bicicleta = new Bicicleta();
        Automovil automovil = new Automovil();

        bicicleta.acelerar();
        automovil.acelerar();

        bicicleta.detener();
        automovil.detener();
    }
}
