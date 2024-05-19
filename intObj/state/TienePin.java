public class TienePin extends CajeroState {
    public TienePin(CajeroAutomatico cajero) {
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
        System.out.println("Ya hay un pin ingresado");
    }

    @Override
    public void retirarDinero(double dinero) {
        if(dinero > this.getCajero().dineroEnCajero) {
            System.out.println("No tiene suficiente dinero");
            System.out.println("Tu tarjeta es retirada");

            this.getCajero().setCajeroEstado(this.getCajero().getNoTieneTarjetaEstado());
        } else {
            System.out.println("Retiras " + dinero + " pesos del cajero");

            this.getCajero().setDineroEnCajero(this.getCajero().dineroEnCajero - dinero);
        }

        if(this.getCajero().dineroEnCajero <= 0) {
            System.out.println("Retiraste todo tu dinero");
            this.getCajero().setCajeroEstado(this.getCajero().getNoTieneDinero());
        }
    }
}
