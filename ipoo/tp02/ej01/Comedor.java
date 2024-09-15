import java.util.ArrayList;

public class Comedor {
    private ArrayList<Reserva> reservas;
    private String direccion;
    private int telefono;

    public Comedor(ArrayList<Reserva> reservas, String direccion, int telefono) {
        this.setReservas(reservas);
        this.setTelefono(telefono);
        this.setDireccion(direccion);
    }

	public ArrayList<Reserva> getReservas() {
		return reservas;
	}
	public void setReservas(ArrayList<Reserva> reservas) {
		this.reservas = reservas;
	}

	public String getDireccion() {
		return direccion;
	}
	public void setDireccion(String direccion) {
		this.direccion = direccion;
	}

	public int getTelefono() {
		return telefono;
	}
	public void setTelefono(int telefono) {
		this.telefono = telefono;
	}

    /* Agrega una reserva a las reservas del comedor*/
    public void agregarReserva(Cliente cliente, Plato plato) {
        this.getReservas().add(new ReservaSimple(cliente, "hoy", plato));
    }

    /* Agrega varias reservas a las reservas del comedor*/
    public void agregarReserva(Cliente cliente, ArrayList<Plato> platos) {
        this.getReservas().add(new ReservaMultiple(cliente, "hoy", platos));
    }

    /* Retorna el valor del plato teniendo en cuenta los descuentos pertinentes */
    public double valorReserva(Reserva reserva) {
        return reserva.valorReserva();
    }

    /* Retorna la cantidad total de todos los platos reservados */
    public int totalPlatosReservados() {
        int suma = 0;
        for (Reserva r : this.getReservas()) {
            suma += r.totalPlatos();
        }

        return suma;
    }

    /* Retorna la suma total de todos los valores platos reservados */
    public double totalValorReservas() {
        double suma = 0;
        for (Reserva r : this.getReservas()) {
            suma += r.valorReserva();
        }

        return suma;
    }

    /* Retorna la reserva que tenga más platos reservados */
    public Reserva reservaMasPlatos() {
        Reserva reservaMuchosPlatos = this.getReservas().get(0);
        for (Reserva r : this.getReservas()) {
            if(reservaMuchosPlatos.totalPlatos() < r.totalPlatos()) {
                reservaMuchosPlatos = r;
            }
        }

        return reservaMuchosPlatos;
    }
}
