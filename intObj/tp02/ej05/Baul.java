public class Baul {
    private boolean abierto;
    private int espacio = 10;
	private int cosas[] = new int[getEspacio()];

    public Baul() {
        setAbierto(false);
    }

	public boolean isAbierto() {
		return abierto;
	}
	public void setAbierto(boolean abierto) {
		this.abierto = abierto;
	}

    public int getEspacio() {
		return espacio;
	}
	public void setEspacio(int espacio) {
		this.espacio = espacio;
	}

    public int[] getCosas() {
        return cosas;
    }
    public void setCosas(int[] cosas) {
        this.cosas = cosas;
    }

    public void abrir() {
        setAbierto(true);
    }
    public void cerrar() {
        setAbierto(false);
    }
}
