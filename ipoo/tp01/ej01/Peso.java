public class Peso extends Moneda {
    public Peso() {
        this.setValorConversion(1);
    }

	public double convertirPesos(double monto) {
        return this.getValorConversion()*monto;
	}
}
