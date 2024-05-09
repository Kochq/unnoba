import java.util.Date;

public class CuentaCorriente extends CuentaBca {

	public CuentaCorriente(String titular, double saldo, int maxExtracciones, Moneda moneda) {
		super(titular, saldo, maxExtracciones, moneda);
	}

	public void depositar(double monto) {
        this.setSaldo(this.getSaldo()+monto);
        this.addTransaccion(new Date(), monto, "deposito");
	}

	public void extraer(double monto) {
        if(this.getMaxExtracciones() > 0) {
            this.setSaldo(this.getSaldo()-monto);
            this.setMaxExtracciones(this.getMaxExtracciones()-1);
            this.addTransaccion(new Date(), monto, "extraccion");
        }
	}
}
