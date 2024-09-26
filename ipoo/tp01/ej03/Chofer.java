package tp01.ej03;

import java.util.Date;

public class Chofer implements Frecuencia {
    private String nombre;
    private Colectivo colectivo;

	public Chofer(String nombre, Colectivo colectivo) {
        this.setNombre(nombre);
        this.setColectivo(colectivo);
    }

	public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	public Colectivo getColectivo() {
		return colectivo;
	}
	public void setColectivo(Colectivo colectivo) {
		this.colectivo = colectivo;
	}

	@Override
	public int millas() {
        return (int) (this.getColectivo().getKm() * 0.621371);
	}

	@Override
	public Date ultimoViaje() {
        return this.getColectivo().getUltimoViaje();
	}
}
