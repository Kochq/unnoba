import java.util.Date;

public class CajaAhorro extends CuentaBca {

	public CajaAhorro(String titular, double saldo, int maxExtracciones) {
		super(titular, saldo, maxExtracciones);
	}

	public void depositar(double monto) {
        this.setSaldo(this.getSaldo()+monto);
        this.addTransaccion(new Date(), monto, "deposito");
	}

	public void extraer(double monto) {
        if(this.getSaldo() > monto) {
            this.setSaldo(this.getSaldo()-monto);
            this.addTransaccion(new Date(), monto, "extraccion");
        }
	}
}
