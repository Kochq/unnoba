abstract public class CajeroState {
    private CajeroAutomatico cajero;

	public CajeroState(CajeroAutomatico cajero) {
        this.setCajero(cajero);
    }

    public CajeroAutomatico getCajero() {
		return cajero;
	}
	public void setCajero(CajeroAutomatico cajero) {
		this.cajero = cajero;
	}

    abstract void insertarTarjeta();
    abstract void sacarTarjeta();
    abstract void insertarPin(int pin);
    abstract void retirarDinero(double dinero);
}
