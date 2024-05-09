public class Peso extends Moneda {
    public Peso() {
        this.setValorConversion(1000);
    }

    public double convertirAPesos(double monto) {
        return monto;
    }
}
