abstract public class Figura {
	private String color;
    
    public Figura(String color) {
        setColor(color);
    }

    public String getColor() {
		return color;
	}
    public void setColor(String color) {
        this.color = color;
    }

    abstract public double getArea();

    abstract public void pintar();
}
