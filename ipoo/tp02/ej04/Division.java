package tp02.ej04;

public class Division extends OperacionComp {
    public Division(Operacion opIzq, Operacion opDer) {
        super(opIzq, opDer);
    }

    @Override
	public double calcular() {
        return (this.getOpIzq().calcular() / this.getOpDer().calcular());
	}
}
