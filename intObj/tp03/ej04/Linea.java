public class Linea extends Figura {
    public double largo;

    public Linea(double largo, String color) {
        super(color);
        setLargo(largo);
    }

    public double getLargo() {
        return this.largo;
    }
    public void setLargo(double largo) {
        this.largo = largo;
    }

    public double getArea() {
        return getLargo();
    }

    public void pintar() {
        System.out.println("Pintando linea " + getColor());
    }
}
