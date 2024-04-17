package tp02;

public class Circulo {
    private Punto centro;
    private float radio;
    
    public Circulo(float radio) {
        this(radio, new Punto());
    }
    public Circulo(float radio, Punto centro) {
        setRadio(radio);
        setCentro(centro);
    }

    public Punto getCentro() {
        return centro;
    }
    public void setCentro(Punto centro) {
        this.centro = centro;
    }
    public float getRadio() {
        return radio;
    }
    public void setRadio(float radio) {
        this.radio = radio;
    }

    public void ampliar(float valor) {
        setRadio(getRadio() + valor);
    }

    public double area() {
        return 2*getRadio() * Math.PI;
    }

    public void trasladar(float x, float y) {
        getCentro().setX(x);
        getCentro().setY(y);
    }
}
