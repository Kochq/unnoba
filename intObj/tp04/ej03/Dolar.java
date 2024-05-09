public class Dolar extends Moneda {
    public Dolar() {
        this.setValorConversion(1000);
    }

    public double convertirAPesos(double monto) {
        return monto*this.getValorConversion();
    }
}
