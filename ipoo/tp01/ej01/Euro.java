package tp01.ej01;

public class Euro extends Moneda {
    public Euro() {
        super.setValorConversion(1600);
    }

	public double convertirPesos(double monto) {
        return this.getValorConversion()*monto;
	}
}
