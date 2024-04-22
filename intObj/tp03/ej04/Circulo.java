public class Circulo extends Figura {
    private double radio;

    public Circulo(double radio, String color) {
        super(color);
        setRadio(radio);
    }

    public double getRadio() {
        return this.radio;
    }
    public void setRadio(double radio) {
        this.radio = radio;
    }

    public double getArea() {
        return getRadio()*getRadio()*Math.PI;        
    }
}
