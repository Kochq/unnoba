abstract public class Reserva {
    private Cliente cliente;
    private String fecha;

    public Reserva(Cliente cliente, String fecha) {
        this.setCliente(cliente);
        this.setFecha(fecha);
    }

	public Cliente getCliente() {
		return cliente;
	}
	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}

	public String getFecha() {
		return fecha;
	}
	public void setFecha(String fecha) {
		this.fecha = fecha;
	}

    abstract public double valorReserva();
    abstract public int totalPlatos();
}
