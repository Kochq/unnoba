public class Rectangulo extends Figura {
    private double base;
	private double altura;

    public Rectangulo(Punto origen, double base, double altura) {
        super(origen);
        this.setBase(base);
        this.setAltura(altura);
    }

    public double getBase() {
		return base;
	}
	public void setBase(double lado1) {
		this.base = lado1;
	}

	public double getAltura() {
		return altura;
	}
	public void setAltura(double lado2) {
		this.altura = lado2;
	}

	@Override
	public double area() {
        return this.getBase() * this.getAltura();
	}
}
