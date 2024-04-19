public class Rueda {
    private boolean girando;
    private int rpm;
    private float velocidad;
    private int radio;

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

	public float getVelocidad() {
		return velocidad;
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

    public float calcVelocidad() {
        if(this.isGirando()) {
            return ((this.getRpm() * 2*Math.PI)/60) * this.getRadio();
        } else {
            return 0;
        }
    }
}
