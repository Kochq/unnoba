public class Dolar extends Moneda {
    public Dolar() {
        super.setValorConversion(1500);
    }

	public double convertirPesos(double monto) {
        return this.getValorConversion()*monto;
	}
}
