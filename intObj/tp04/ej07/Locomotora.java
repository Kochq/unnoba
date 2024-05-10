import java.util.Vector;

abstract public class Locomotora {
    private int consumo;
    private double peso;
    private double potenciaMax;
    private double velocidadMax;

    public Locomotora(int consumo, double peso, double potenciaMax, double velocidadMax) {
        this.setConsumo(consumo);
        this.setPeso(peso);
        this.setPotenciaMax(potenciaMax);
        this.setVelocidadMax(velocidadMax);
    }

	public int getConsumo() {
		return consumo;
	}
	public void setConsumo(int consumo) {
		this.consumo = consumo;
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

    public double cantidadDeLitrosNecesarios(int km) {
        return this.getConsumo()*km;
    }

    public double calcularVelocidad(Vector<Vagon> vagones) {
        double velocidadMax = this.getVelocidadMax();
        for(Vagon vagon : vagones) {
            velocidadMax = (velocidadMax / 100) * vagon.getDisminucionVel();
        }

        return velocidadMax;
    }
}
