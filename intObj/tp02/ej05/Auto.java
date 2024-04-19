public class Auto {
    private double velocidad;
    private Ruedas ruedas;
    private Luces luces;
    private Baul baul;
    private Motor motor;

    public Auto() {
        this(new Ruedas(), new Luces(), new Baul(), new Motor(350));
    }

    public Auto(Ruedas ruedas, Luces luces, Baul baul, Motor motor) {
        setRuedas(ruedas);
        setLuces(luces);
        setBaul(baul);
        setMotor(motor);
    }

    public Ruedas getRuedas() {
        return ruedas;
    }
    public void setRuedas(Ruedas ruedas) {
        this.ruedas = ruedas;
    }

    public Luces getLuces() {
        return luces;
    }
    public void setLuces(Luces luces) {
        this.luces = luces;
    }

    public Baul getBaul() {
        return baul;
    }
    public void setBaul(Baul baul) {
        this.baul = baul;
    }

    public Motor getMotor() {
        return motor;
    }
    public void setMotor(Motor motor) {
        this.motor = motor;
    }

    public double getVelocidad() {
        return this.velocidad;
    }
    public void setVelocidad(double velocidad) {
        this.velocidad = velocidad;
    }

    public void encender() {
        getMotor().encender();
        getRuedas().encender(getMotor().getRpm());
    }
    public void apagar() {
        getMotor().apagar();
        getRuedas().apagar();
    }

    public void abrirBaul() {
        getBaul().abrir();
    }
    public void cerrarBaul() {
        getBaul().cerrar();
    }

    public void acelerar() {
        getMotor().setRpm(getMotor().getRpm() + 1);
        getRuedas().setVelocidad(getMotor().getRpm());

        setVelocidad(getRuedas().getVelocidad());
    }
    public void desAcelerar() {
        getMotor().setRpm(getMotor().getRpm() - 1);
        getRuedas().setVelocidad(getMotor().getRpm());

        setVelocidad(getRuedas().getVelocidad());
    }

    public void prenderLuces() {
        getLuces().encender();
    }
    public void apagarLuces() {
        getLuces().apagar();
    }

}
