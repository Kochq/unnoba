public class Resta extends OperacionComp {
    public Resta(Operacion opIzq, Operacion opDer) {
        super(opIzq, opDer);
    }

    @Override
	public double calcular() {
        return (this.getOpIzq().calcular() - this.getOpDer().calcular());
	}
}
