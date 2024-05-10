import java.util.Vector;

public class Tren {
    private Locomotora locomotora;
    private Vector<Vagon> vagones = new Vector<Vagon>();

    public Tren(Locomotora locomotora) {
        this.setLocomotora(locomotora);
    }

	public Locomotora getLocomotora() {
		return locomotora;
	}
	public void setLocomotora(Locomotora locomotora) {
		this.locomotora = locomotora;
	}

	public Vector<Vagon> getVagones() {
		return vagones;
	}
	public void setVagones(Vector<Vagon> vagones) {
		this.vagones = vagones;
	}

    public void addVagon(Vagon vagon) {
        this.getVagones().add(vagon);
    }

    public double cantidadLitrosNecesarios(int km) {
        return this.getLocomotora().cantidadDeLitrosNecesarios(km);
    }

    public double pesoTotalDelTren() {
        double pesoTotal = 0;

        pesoTotal += this.getLocomotora().getPeso();

        for(Vagon vagon : this.getVagones()) {
            pesoTotal += vagon.calcularPeso();
        }

        return pesoTotal;
    }

    public boolean puedeMover(Vector<Vagon> vagones) {
        double pesoMaximo = this.getLocomotora().getPotenciaMax();

        for(Vagon vagon : vagones) {
            pesoMaximo -= vagon.calcularPeso();
        }

        return pesoMaximo > 0;
    }

    public int cantidadPasajeros() {
        int pasajeros = 0;
        for(Vagon vagon : this.getVagones()) {
            pasajeros += vagon.cantidadDePasajeros();
        }

        return pasajeros;
    }

    public double velocidadMaxima() {
        return this.getLocomotora().calcularVelocidad(this.getVagones());
    }
}
