import java.util.Date;

public class PolizaParcial extends Poliza {
    static private double PORCENTAJE = 0.07;
    static private double COSTO_BASE = 10000;

    public static double getPORCENTAJE() {
		return PORCENTAJE;
	}
	public static double getCOSTO_BASE() {
		return COSTO_BASE;
	}

	public PolizaParcial(String nombreAsegurado, Date fechaAlta, Auto auto) {
        super(nombreAsegurado, fechaAlta, auto);
    }

    public double calcularValorPoliza() {
        return this.getAuto().getValuacion() * PolizaParcial.getPORCENTAJE() + PolizaParcial.getCOSTO_BASE();
    }
}
