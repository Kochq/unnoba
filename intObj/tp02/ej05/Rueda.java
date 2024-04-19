public class Rueda {
    private boolean girando;
    private int rpm;
    private double velocidad;
    private int radio;

    public Rueda(int radio) {
        setRpm(0);
        setRadio(radio);
        setGirando(false);
        setVelocidad(0);
    }

    public boolean isGirando() {
        return girando;
    }
    public void setGirando(boolean girando) {
        this.girando = girando;
    }

    public int getRpm() {
        return rpm;
    }
    public void setRpm(int rpm) {
        this.rpm = rpm;
    }

    public double getVelocidad() {
        return calcVelocidad();
    }
    public void setVelocidad(float velocidad) {
        this.velocidad = velocidad;
    }

    public int getRadio() {
        return radio;
    }
    public void setRadio(int radio) {
        this.radio = radio;
    }

    private double calcVelocidad() {
        if(this.isGirando()) {
            return ((this.getRpm() * 2*Math.PI)/60) * this.getRadio();
        } else {
            return 0;
        }
    }
}
