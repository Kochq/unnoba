abstract public class Moneda {
    private double valorConversion;

	public double getValorConversion() {
		return valorConversion;
	}
	public void setValorConversion(double valorConversion) {
		this.valorConversion = valorConversion;
	}

	abstract double convertirAPesos(double monto);
}
