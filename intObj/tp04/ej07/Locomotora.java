abstract public class Locomotora {
    private double peso;
    private double potenciaMax;
    private double velocidadMax;

    public Locomotora(double peso, double potenciaMax, double velocidadMax) {
        this.setPeso(peso);
        this.setPotenciaMax(potenciaMax);
        this.setVelocidadMax(velocidadMax);
    }

	public double getPeso() {
		return peso;
	}
	public void setPeso(double peso) {
		this.peso = peso;
	}

	public double getPotenciaMax() {
		return potenciaMax;
	}
	public void setPotenciaMax(double potenciaMax) {
		this.potenciaMax = potenciaMax;
	}

	public double getVelocidadMax() {
		return velocidadMax;
	}
	public void setVelocidadMax(double velocidadMax) {
		this.velocidadMax = velocidadMax;
	}

    abstract public double cantidadDeLitrosNecesarios(int km);

    public void calcularVelocidad(Vagon vagon) {
        this.setVelocidadMax(this.getVelocidadMax() / 100 * vagon.getDisminucionVel());
    }
}
