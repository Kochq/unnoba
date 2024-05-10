import java.util.Vector;

public class VagonCarga extends Vagon {
    private double pesoCarga;

	public VagonCarga(double peso, double pesoCarga) {
        super(3, peso);
        this.setPesoCarga(pesoCarga);
    }

    public double getPesoCarga() {
        return pesoCarga;
    }
    public void setPesoCarga(double pesoCarga) {
        this.pesoCarga = pesoCarga;
    }

    public double calcularPeso() {
        return this.getPeso() + this.getPesoCarga();
    }

    public int cantidadDePasajeros() {
        return 0;
    }
}
