import java.util.Date;

public class PolizaTotal extends Poliza {
    static private double PORCENTAJE = 0.10;
    static private double COSTO_BASE = 18000;

    public static double getPORCENTAJE() {
		return PORCENTAJE;
	}
	public static double getCOSTO_BASE() {
		return COSTO_BASE;
	}

	public PolizaTotal(String nombreAsegurado, Date fechaAlta, Auto auto) {
        super(nombreAsegurado, fechaAlta, auto);
    }

    public double calcularValorPoliza() {
        return this.getAuto().getValuacion() * PolizaTotal.getPORCENTAJE() + PolizaTotal.getCOSTO_BASE();
    }
}
