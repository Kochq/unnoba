public class Circulo extends Figura {
    private double radio;

    public Circulo(Punto origen, double radio) {
        super(origen);
        this.setRadio(radio);
    }

	public double getRadio() {
		return this.radio;
	}
	public void setRadio(double radio) {
		this.radio = radio;
	}

	@Override
	public double area() {
        return Math.PI * Math.pow(this.getRadio(), 2);
	}
}
