public class TNacional extends Transaccion {
    public TNacional(String fecha, Banco bancoDestino, double monto, Cliente clienteOrigen) {
        super(fecha, bancoDestino, monto, clienteOrigen);
        super.setImpuesto(0.03);
    }

	public double calcularImpuesto() {
        return this.getMonto()*this.getImpuesto();
	}

}
