package tp01.ej01;

abstract public class Transaccion {
    private String fecha;
    private Banco bancoDestino;
	private double monto;
    private Cliente clienteOrigen;
    private double impuesto;

    public Transaccion(String fecha, Banco bancoDestino, double monto, Cliente clienteOrigen) {
        this.setFecha(fecha);
        this.setBancoDestino(bancoDestino);
        this.setMonto(monto);
        this.setClienteOrigen(clienteOrigen);
    }

	public String getFecha() {
		return fecha;
	}
	public void setFecha(String fecha) {
		this.fecha = fecha;
	}

	public Banco getBancoDestino() {
		return bancoDestino;
	}
	public void setBancoDestino(Banco bancoDestino) {
		this.bancoDestino = bancoDestino;
	}

	public double getMonto() {
		return monto;
	}
	public void setMonto(double monto) {
		this.monto = monto;
	}

	public Cliente getClienteOrigen() {
		return clienteOrigen;
	}
	public void setClienteOrigen(Cliente clienteOrigen) {
		this.clienteOrigen = clienteOrigen;
	}

    public double getImpuesto() {
		return impuesto;
	}
	public void setImpuesto(double impuesto) {
		this.impuesto = impuesto;
	}

    abstract public double calcularImpuesto();
}
