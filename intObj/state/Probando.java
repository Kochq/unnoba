public class Probando {
    public static void main(String[] args) {
        CajeroAutomatico cajero = new CajeroAutomatico();

        cajero.insertarTarjeta();
        cajero.retirarDinero(1234);
        cajero.insertarPin(1234);
        cajero.insertarPin(123);
        cajero.retirarDinero(1234);
        cajero.retirarDinero(123400);
        cajero.insertarTarjeta();
        cajero.insertarPin(123);
        cajero.retirarDinero(766);
        cajero.retirarDinero(1);
    }
}
