public class Colectivo {
    private int cantPasajeros;
    private float km;
    private String modelo;
    private String patente;

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
}
