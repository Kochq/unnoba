public class Cuadrado extends Figura {
    private double lado;

    public Cuadrado(Punto origen, double lado) {
        super(origen);
        this.setLado(lado);
    }

	public double getLado() {
		return lado;
	}
	public void setLado(double lado) {
		this.lado = lado;
	}

	@Override
	public double area() {
        return this.getLado() * this.getLado();
	}
}
