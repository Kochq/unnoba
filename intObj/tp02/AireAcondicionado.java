package tp02;

public class AireAcondicionado {
    private float temp;
    private boolean encendido;

	public float getTemp() {
		return temp;
	}

	public void setTemp(float temp) {
		this.temp = temp;
	}

    public void encender() {
        this.encendido = true;
    }

    public boolean isEncendido() {
        return encendido;
    }

    public void aumentarTemp(float temp) {
        setTemp(getTemp() + temp);
    }

    public void reducirTemp(float temp) {
        setTemp(getTemp() - temp);
    }
}
