 

public class Punto {
    private float x;
    private float y;

    public Punto() {
        setX(0);
        setY(0);
    }

    public Punto(float x, float y) {
        setX(x);
        setY(y);
    }

	public float getX() {
		return x;
	}

	public void setX(float x) {
		this.x = x;
	}

	public float getY() {
		return y;
	}

    public void setY(float y) {
		this.y = y;
    }

    public void sumarValor(float valor) {
        setX(getX() + valor);
        setY(getY() + valor);
    }

    public void sumarPunto(Punto punto) {
        setX(getX() + punto.getX());
        setY(getY() + punto.getY());
    }

    public double distanciaDe(Punto punto) {
        return Math.sqrt((Math.pow(getX() - punto.getX(), 2) + Math.pow(getY() - punto.getY(), 2)));
    }
}
