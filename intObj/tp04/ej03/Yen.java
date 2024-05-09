public class Yen extends Moneda {
    public Yen() {
        this.setValorConversion(5.5);
    }

    public double convertirAPesos(double monto) {
        return monto*getValorConversion();
    }
}
