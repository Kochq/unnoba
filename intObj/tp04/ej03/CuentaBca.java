import java.util.Date;
import java.util.Vector;

abstract public class CuentaBca {
    private String titular;
    private double saldo;
    private int maxExtracciones;
    private Date fechaCreacion;
    private Vector<Transaccion> transacciones = new Vector<Transaccion>();
    private Moneda moneda;

	public CuentaBca(String titular, double saldo, int maxExtracciones, Moneda moneda) {
        this.setTitular(titular);
        this.setSaldo(saldo);
        this.setMaxExtracciones(maxExtracciones);
        this.setFechaCreacion(new Date());
        this.setMoneda(moneda);
    }

	public String getTitular() {
		return titular;
	}
	public void setTitular(String titular) {
		this.titular = titular;
	}

	public double getSaldo() {
		return saldo;
	}
	public void setSaldo(double saldo) {
		this.saldo = saldo;
	}

	public int getMaxExtracciones() {
		return maxExtracciones;
	}
	public void setMaxExtracciones(int maxExtracciones) {
		this.maxExtracciones = maxExtracciones;
	}

	public Date getFechaCreacion() {
		return fechaCreacion;
	}
	public void setFechaCreacion(Date fechaCreacion) {
		this.fechaCreacion = fechaCreacion;
	}

	public Vector<Transaccion> getTransacciones() {
		return transacciones;
	}
	public void setTransacciones(Vector<Transaccion> transacciones) {
		this.transacciones = transacciones;
	}

    public void addTransaccion(Transaccion transaccion) {
        getTransacciones().add(transaccion);
    }
    public void addTransaccion(Date fecha, double monto, String tipo) {
        getTransacciones().add(new Transaccion(fecha, monto, tipo));
    }

    public Moneda getMoneda() {
		return moneda;
	}
	public void setMoneda(Moneda moneda) {
		this.moneda = moneda;
	}

    abstract public void depositar(double monto);
    abstract public void extraer(double monto);
    public double saldo() {
        return this.getMoneda().convertirAPesos(this.getSaldo());
    }
}
