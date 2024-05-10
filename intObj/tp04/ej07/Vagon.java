abstract public class Vagon {
    private double disminucionVel;
    private double peso;

    public Vagon(double disminucionVel, double peso) {
        this.setDisminucionVel(disminucionVel);
        this.setPeso(peso);
    }

	public double getDisminucionVel() {
		return disminucionVel;
	}
	public void setDisminucionVel(double disminucionVel) {
		this.disminucionVel = disminucionVel;
	}

	public double getPeso() {
		return peso;
	}
	public void setPeso(double peso) {
		this.peso = peso;
	}

    abstract public double calcularPeso();
    public int cantidadDePasajeros() {
        return 0;
    }
}
