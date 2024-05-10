import java.util.Vector;

public class VagonPasajeros extends Vagon {
    private Vector<Pasajero> pasajeros = new Vector<Pasajero>();
    private int cantPasajerosMax;


    public VagonPasajeros(double peso, int cantPasajerosMax) {
        super(3, peso);
        this.setCantPasajerosMax(cantPasajerosMax);
    }

    public void setPasajeros(Vector<Pasajero> pasajeros) {
        this.pasajeros = pasajeros;
    }
    public Vector<Pasajero> getPasajeros() {
        return this.pasajeros;
    }

    public int getCantPasajerosMax() {
        return cantPasajerosMax;
    }
    public void setCantPasajerosMax(int cantPasajerosMax) {
        this.cantPasajerosMax = cantPasajerosMax;
    }

    public void addPasajero(Pasajero pasajero) {
        if(this.getCantPasajerosMax() > this.getPasajeros().size()) {
            this.getPasajeros().add(pasajero);
        }
    }

    public double calcularPeso() {
        return this.getPeso() + (this.getCantPasajerosMax() * 80);
    }

    public int cantidadDePasajeros() {
        return this.getPasajeros().size();
    }
}
