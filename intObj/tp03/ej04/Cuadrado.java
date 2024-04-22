public class Cuadrado extends Figura {
    private double lado;

    public Cuadrado(double lado, String color) {
        super(color);
        setLado(lado);
    }

    public double getLado() {
        return this.lado;
    }
    public void setLado(double lado) {
        this.lado = lado;
    }

    public double getArea() {
        return Math.pow(getLado(), 2);
    }
}
