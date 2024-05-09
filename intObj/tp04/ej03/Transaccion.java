import java.util.Date;

public class Transaccion {
    private Date fecha;
    private double monto;
    private String tipo;

    public Transaccion(Date fecha, double monto, String tipo) {
        setFecha(fecha);
        setMonto(monto);
        setTipo(tipo);
    }

	public Date getFecha() {
		return fecha;
	}
	public void setFecha(Date fecha) {
		this.fecha = fecha;
	}

	public double getMonto() {
		return monto;
	}
	public void setMonto(double monto) {
		this.monto = monto;
	}

	public String getTipo() {
		return tipo;
	}
	public void setTipo(String tipo) {
		this.tipo = tipo;
	}
}
