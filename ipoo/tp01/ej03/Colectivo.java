package tp01.ej03;

import java.util.Date;

public class Colectivo implements Frecuencia {
    private int cantPasajeros;
    private float km;
    private String modelo;
    private String patente;
    private Date ultimoViaje;

    public Colectivo(int cantPasajeros, float km, String modelo, String patente) {
        this.setCantPasajeros(cantPasajeros);
        this.setKm(km);
        this.setModelo(modelo);
        this.setPatente(patente);
    }

	public int getCantPasajeros() {
		return cantPasajeros;
	}
	public void setCantPasajeros(int cantPasajeros) {
		this.cantPasajeros = cantPasajeros;
	}

	public float getKm() {
		return km;
	}
	public void setKm(float km) {
		this.km = km;
	}

	public String getModelo() {
		return modelo;
	}
	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public String getPatente() {
		return patente;
	}
	public void setPatente(String patente) {
		this.patente = patente;
	}

    public Date getUltimoViaje() {
		return ultimoViaje;
	}
	public void setUltimoViaje(Date ultimoViaje) {
		this.ultimoViaje = ultimoViaje;
	}

	@Override
	public int millas() {
        return (int) (this.getKm() * 0.621371);
	}

	@Override
	public java.util.Date ultimoViaje() {
        return this.getUltimoViaje();
	}
}
