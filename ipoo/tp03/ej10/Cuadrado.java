package tp03.ej10;

public class Cuadrado extends Figura {
    private double lado;

    public Cuadrado(Punto origen, double lado, String nombre, String color) {
        super(origen, nombre, color);
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
