public class ReservaSimple extends Reserva {
    private Plato plato;

	public ReservaSimple(Cliente cliente, String fecha, Plato plato) {
        super(cliente, fecha);
        this.setPlato(plato);
    }

    public Plato getPlato() {
		return plato;
	}
	public void setPlato(Plato plato) {
		this.plato = plato;
	}

	public double valorReserva() {
        return this.getPlato().getPrecio() * this.getCliente().getDescuento();
	}

    public int totalPlatos() {
        return 1;
    }
}
