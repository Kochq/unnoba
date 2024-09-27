package tp02.ej01;

import java.util.ArrayList;
import java.util.Comparator;

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
        return this.getReservas().stream().mapToInt(Reserva::totalPlatos).sum();
    }

    /* Retorna la suma total de todos los valores platos reservados */
    public double totalValorReservas() {
        return this.getReservas().stream().mapToDouble(Reserva::valorReserva).sum();
    }

    /* Retorna la reserva que tenga más platos reservados */
    public Reserva reservaMasPlatos() {
        return this.getReservas().stream().max(new Comparator<Reserva>() {
            @Override
            public int compare(Reserva o1, Reserva o2) {
                return Integer.compare(o1.totalPlatos(), o2.totalPlatos());
            }
        }).get();
    }
}
