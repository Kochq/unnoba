import java.util.Vector;

public class TourPaquete extends Tour {
    private Vector<TourSimple> tours = new Vector<TourSimple>();

    public TourPaquete(String nombre, double precio) {
        super(nombre, precio);
    }

	public Vector<TourSimple> getTours() {
		return tours;
	}
	public void setTours(Vector<TourSimple> tours) {
		this.tours = tours;
	}

    public void addTour(TourSimple tour) {
        this.getTours().add(tour);
    }

    public int cantidadTuristas() {
        int cantidad = 0;
        for(TourSimple tour : this.getTours()) {
            cantidad += tour.cantidadTuristas();
        }

        return cantidad;
    }

	public double calcularPrecio() {
        int precio = 0;
        for(TourSimple tour : this.getTours()) {
            precio += tour.calcularPrecio();
        }

        return precio;
	}
}
