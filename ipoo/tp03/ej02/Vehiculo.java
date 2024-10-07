import java.util.Date;
import java.util.Vector;

public class Vehiculo implements Frecuencia {
    private Vector<Pasajero> pasajeros;
	private Date ultimoViaje;

    public Vector<Pasajero> getPasajeros() {
        return pasajeros;
    }
    public void setPasajeros(Vector<Pasajero> pasajeros) {
        this.pasajeros = pasajeros;
    }

	public Date getUltimoViaje() {
		return ultimoViaje;
	}
	public void setUltimoViaje(Date ultimoViaje) {
		this.ultimoViaje = ultimoViaje;
	}

	@Override
	public int millas() {
        int suma = 0;

        for (Pasajero p : pasajeros) {
            suma += p.getMillasAcumuladas();
        }

        return suma;
	}

	@Override
	public Date ultimoViaje() {
        return this.getUltimoViaje();
	}

}
