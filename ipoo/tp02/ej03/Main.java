package tp02.ej03;

public class Main {
    public static void main(String[] args) {
        HornoPan horno = new HornoPan();

        horno.hornearPanNegro().detallePan();
        horno.hornearPanBlanco().detallePan();
        horno.hornearPanIntegral().detallePan();
    }
}
