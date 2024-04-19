public class Motor {
    private boolean encendido;
    private int rpm;

    public Motor(int rpm) {
        setEncendido(false);
        setRpm(rpm);
    }

	public boolean isEncendido() {
		return encendido;
	}
	public void setEncendido(boolean encendido) {
		this.encendido = encendido;
	}
	public int getRpm() {
		return rpm;
	}
	public void setRpm(int rpm) {
		this.rpm = rpm;
	}

    public void encender() {
        setEncendido(true);
    }
    public void apagar() {
        setEncendido(false);
    }
}
