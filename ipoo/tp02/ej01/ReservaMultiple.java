import java.util.ArrayList;

public class ReservaMultiple extends Reserva {
    private ArrayList<Plato> platos;

	public ReservaMultiple(Cliente cliente, String fecha, ArrayList<Plato> platos) {
        super(cliente, fecha);
        this.setPlatos(platos);
    }

	public ArrayList<Plato> getPlatos() {
		return platos;
	}
	public void setPlatos(ArrayList<Plato> platos) {
		this.platos = platos;
	}

	public double valorReserva() {
        return this.getPlatos().stream().mapToDouble(Plato::getPrecio).sum() * 0.95;
	}

    public int totalPlatos() {
        return this.getPlatos().size();
    }
}
