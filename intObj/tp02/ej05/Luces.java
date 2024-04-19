public class Luces {
    private boolean encencido;

    public Luces() {
        setEncencido(false);
    }

	public boolean isEncencido() {
		return encencido;
	}
	public void setEncencido(boolean encencido) {
		this.encencido = encencido;
	}

    public void encender() {
        this.setEncencido(true);
    }
    public void apagar() {
        this.setEncencido(false);
    }
}
