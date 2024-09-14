public class Suma extends OperacionComp {
    public Suma(Operacion opIzq, Operacion opDer) {
        super(opIzq, opDer);
    }

    @Override
	public double calcular() {
        return (this.getOpIzq().calcular() + this.getOpDer().calcular());
	}
}
