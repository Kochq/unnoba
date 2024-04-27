public class Triangulo extends Figura {
    private double base;
	private double altura;

    public Triangulo(double base, double altura, String color) {
        super(color);
        setBase(base);
        setAltura(altura);
    }

    public double getBase() {
        return base;
    }
    public void setBase(double base) {
        this.base = base;
    }

    public double getAltura() {
        return altura;
    }
    public void setAltura(double altura) {
        this.altura = altura;
    }

    public double getArea() {
        return (getBase()*getAltura())/2;
    }

    public void pintar() {
        System.out.println("Pintando triangulo " + getColor());
    }
}
