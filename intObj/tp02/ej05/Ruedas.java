public class Ruedas {
    private Rueda ruedas[] = new Rueda[4];
    private boolean encendidas;
    private double velocidad;

    public Ruedas() {
        setEncendidas(false);
        for(int i = 0; i < 4; i++) {
            ruedas[i] = new Rueda(20);
        }
    }

    public boolean isEncendidas() {
        return encendidas;
    }

    private void setEncendidas(boolean encendidas) {
        this.encendidas = encendidas;
    }

    public Rueda[] getRuedas() {
        return ruedas;
    }

    public void setRuedas(Rueda[] ruedas) {
        this.ruedas = ruedas;
    }

    private double calcVelocidad() {
        double total = 0;
        for(Rueda ruedas : ruedas) {
            total += ruedas.getVelocidad();
        }

        return total/4;
    }
    public void setVelocidad(int rpm) {
        for (Rueda ruedas : ruedas) {
            ruedas.setRpm(rpm);
        }
        this.velocidad = this.calcVelocidad();
    }
    public double getVelocidad() {
        return this.velocidad;
    }

    public void encender(int rpm) {
        setEncendidas(true);
        for (Rueda ruedas : ruedas) {
            ruedas.setGirando(true);
            ruedas.setRpm(rpm);
        }
    }
    public void apagar() {
        for (Rueda ruedas : ruedas) {
            ruedas.setGirando(false);
        }
        this.setVelocidad(0);
    }
}
