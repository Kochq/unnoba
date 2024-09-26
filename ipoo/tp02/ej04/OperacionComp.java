package tp02.ej04;

public abstract class OperacionComp extends Operacion {
    private Operacion OpIzq;
    private Operacion OpDer;

    public OperacionComp(Operacion opIzq, Operacion opDer) {
        this.setOpIzq(opIzq);
        this.setOpDer(opDer);
    }

	public Operacion getOpIzq() {
		return OpIzq;
	}
	public void setOpIzq(Operacion opIzq) {
		OpIzq = opIzq;
	}
	public Operacion getOpDer() {
		return OpDer;
	}
	public void setOpDer(Operacion opDer) {
		OpDer = opDer;
	}

	public abstract double calcular();
}
