public class NoTieneDinero extends CajeroState {
	public NoTieneDinero(CajeroAutomatico cajero) {
		super(cajero);
	}

	@Override
	public void insertarTarjeta() {
        System.out.println("No hay plata");
	}

	@Override
	public void sacarTarjeta() {
        System.out.println("No hay plata");
	}

	@Override
	public void insertarPin(int pin) {
        System.out.println("No hay plata");
	}

	@Override
	public void retirarDinero(double dinero) {
        System.out.println("No hay plata");
	}
}
