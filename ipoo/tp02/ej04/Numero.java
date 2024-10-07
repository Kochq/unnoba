public class Numero extends Operacion {
    private double numero;

	public Numero(double numero) {
        this.setNumero(numero);
    }

    public double getNumero() {
		return numero;
	}
	public void setNumero(double numero) {
		this.numero = numero;
	}

	public double calcular() {
        return this.getNumero();
	}
}
