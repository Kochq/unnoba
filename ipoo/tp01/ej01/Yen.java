public class Yen extends Moneda {
    public Yen() {
        super.setValorConversion(7);
    }

	public double convertirPesos(double monto) {
        return this.getValorConversion()*monto;
	}
}
