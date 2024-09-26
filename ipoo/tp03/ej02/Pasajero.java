package tp03.ej02;

import java.util.Date;

public class Pasajero implements Frecuencia {
    private int millasAcumuladas;
    private Date ultimoViaje;

	public int getMillasAcumuladas() {
		return millasAcumuladas;
	}
	public void setMillasAcumuladas(int millasAcumuladas) {
		this.millasAcumuladas = millasAcumuladas;
	}

	public Date getUltimoViaje() {
		return ultimoViaje;
	}
	public void setUltimoViaje(Date ultimoViaje) {
		this.ultimoViaje = ultimoViaje;
	}

	@Override
	public int millas() {
        return this.getMillasAcumuladas();
	}

	@Override
	public Date ultimoViaje() {
        return this.getUltimoViaje();
	}

}
