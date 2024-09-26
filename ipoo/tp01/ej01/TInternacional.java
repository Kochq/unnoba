package tp01.ej01;

public class TInternacional extends Transaccion {
    public TInternacional(String fecha, Banco bancoDestino, double monto, Cliente clienteOrigen) {
        super(fecha, bancoDestino, monto, clienteOrigen);
        super.setImpuesto(0.07);
    }

	public double calcularImpuesto() {
        return this.getMonto()*this.getImpuesto();
	}

}
