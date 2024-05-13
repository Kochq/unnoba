import java.util.Vector;

public class Sistema {
    private Vector<Tour> tours = new Vector<Tour>();

	public Vector<Tour> getTours() {
		return tours;
	}
	public void setTours(Vector<Tour> tours) {
		this.tours = tours;
	}

    public void addTour(Tour tour) {
        this.getTours().add(tour);
    }

    public double valorDe(Tour tour) {
        return tour.calcularPrecio();
    }

    public double valorDeTodosLosTours() {
        double precio = 0;
        for(Tour tour : this.getTours()) {
            precio += tour.calcularPrecio();
        }

        return precio;
    }

    public int cantidadTotalDeTuristas() {
        int turistas = 0;
        for(Tour tour : this.getTours()) {
            turistas += tour.cantidadTuristas();
        }

        return turistas;
    }
}
