abstract public class Figura implements FiguraGeometrica {
    private Punto origen;
    private String nombre;
    private String color;

	public Figura(Punto origen, String nombre, String color) {
        this.setOrigen(origen);
        this.setNombre(nombre);
        this.setColor(color);
    }

    public Punto getOrigen() {
        return origen;
    }
    public void setOrigen(Punto origen) {
        this.origen = origen;
    }

    public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public String getColor() {
		return color;
	}
	public void setColor(String color) {
		this.color = color;
	}

    @Override
    public String color() {
        return this.getColor();
    }

    @Override
    public String nombre() {
        return this.getNombre();
    }

    @Override
    public void mover(int value, Direccion direccion) {
        switch(direccion) {
            case NORTE:
                this.getOrigen().setY(this.getOrigen().getY() + value);
                break;
            case SUR:
                this.getOrigen().setY(this.getOrigen().getY() - value);
                break;
            case ESTE:
                this.getOrigen().setX(this.getOrigen().getX() + value);
                break;
            case OESTE:
                this.getOrigen().setX(this.getOrigen().getX() - value);
                break;
        }
    }

    abstract public double area();
}
