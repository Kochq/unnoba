import java.util.Vector;

public class TourSimple extends Tour {
    private int capacidad;
    private Vector<Persona> turistas = new Vector<Persona>();
	private Guia guia;

    public TourSimple(String nombre, double precio, int capacidad, Guia guia) {
        super(nombre, precio);
        this.setCapacidad(capacidad);
        this.setGuia(guia);
    }

    public int getCapacidad() {
		return capacidad;
	}
	public void setCapacidad(int capacidad) {
		this.capacidad = capacidad;
	}

	public Vector<Persona> getTuristas() {
		return turistas;
	}
	public void setTuristas(Vector<Persona> turistas) {
		this.turistas = turistas;
	}

	public Guia getGuia() {
		return guia;
	}
	public void setGuia(Guia guia) {
		this.guia = guia;
	}

    public void addTurista(Persona turista) {
        this.getTuristas().add(turista);
    }

    public int cantidadTuristas() {
        return this.getTuristas().size();
    }

	public double calcularPrecio() {
        return this.getPrecio(); // * this.cantidadTuristas(); ?
	}
}
