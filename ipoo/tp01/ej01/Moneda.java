package tp01.ej01;

abstract public class Moneda {
    private double valorConversion;

	public double getValorConversion() {
		return valorConversion;
	}
	public void setValorConversion(double valorConversion) {
		this.valorConversion = valorConversion;
	}

    abstract public double convertirPesos(double monto);
}
