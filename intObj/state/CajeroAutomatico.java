public class CajeroAutomatico {
	CajeroState tieneTarjeta;     
	CajeroState noTieneTarjeta;
	CajeroState tienePinCorrecto;
	CajeroState cajeroSinDinero;
	
	CajeroState cajeroEstado;
	
	double dineroEnCajero = 2000;
	
	public CajeroAutomatico(){
		tieneTarjeta = new TieneTarjeta(this);
		noTieneTarjeta = new NoTieneTarjeta(this);
		tienePinCorrecto = new TienePin(this);
		cajeroSinDinero = new NoTieneDinero(this);
		
		cajeroEstado = noTieneTarjeta;
		
		if(dineroEnCajero < 0){
			cajeroEstado = cajeroSinDinero;
		}
	}
	
	void setCajeroEstado(CajeroState estado){
		cajeroEstado = estado;
	}
	
	public void setDineroEnCajero(double dinero){
		dineroEnCajero = dinero;
	}
	
	public void insertarTarjeta() {
		cajeroEstado.insertarTarjeta();
	}

	public void sacarTarjeta() {
		cajeroEstado.sacarTarjeta();
	}

	public void retirarDinero(double dinero) {
		cajeroEstado.retirarDinero(dinero);
	}

	public void insertarPin(int pin){
		cajeroEstado.insertarPin(pin);
	}
	
	public CajeroState getTieneTarjetaEstado() { return tieneTarjeta; }
	public CajeroState getNoTieneTarjetaEstado() { return noTieneTarjeta; }
	public CajeroState getTienePin() { return tienePinCorrecto; }
	public CajeroState getNoTieneDinero() { return cajeroSinDinero; }
}
