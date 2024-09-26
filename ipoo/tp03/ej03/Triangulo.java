package tp03.ej03;

public class Triangulo extends Figura {
    private double lado;

	public Triangulo(Punto origen, double lado) {
        super(origen);
        this.lado = lado;
    }

    public double getLado() {
		return lado;
	}
	public void setLado(double lado) {
		this.lado = lado;
	}

	@Override
	public double area() {
        return (Math.sqrt(3) / 4) * this.getLado() * this.getLado();
	}
}
