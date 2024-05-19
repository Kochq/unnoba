public class TieneTarjeta extends CajeroState {
	public TieneTarjeta(CajeroAutomatico cajero) {
        super(cajero);
    }

	@Override
	public void insertarTarjeta() {
        System.out.println("Ya hay una tarjeta insertada");
	}

	@Override
	public void sacarTarjeta() {
        System.out.println("Sacaste la tarjeta");
        this.getCajero().setCajeroEstado(this.getCajero().getNoTieneTarjetaEstado());
	}

	@Override
	public void insertarPin(int pin) {
        if(pin == 123) {
            System.out.println("Pin ingresado correctamente");
            this.getCajero().setCajeroEstado(this.getCajero().getTienePin());
        } else {
            System.out.println("Pin incorrecto");
        }
	}

	@Override
	public void retirarDinero(double dinero) {
        System.out.println("No ingreso el pin");
	}
}
