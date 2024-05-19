public class NoTieneTarjeta extends CajeroState {
	public NoTieneTarjeta(CajeroAutomatico cajero) {
        super(cajero);
    }

	@Override
	public void insertarTarjeta() {
        System.out.println("Tarjeta insertada");
        this.getCajero().setCajeroEstado(this.getCajero().getTieneTarjetaEstado());
	}

	@Override
	public void sacarTarjeta() {
        System.out.println("No hay una tarjeta ingresada");
	}

	@Override
	public void insertarPin(int pin) {
        System.out.println("No hay una tarjeta ingresada");
	}

	@Override
	public void retirarDinero(double dinero) {
        System.out.println("No hay una tarjeta ingresada");
	}
}
