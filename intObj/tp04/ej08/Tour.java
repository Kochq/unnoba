public abstract class Tour {
    private String nombre;
    private double precio;

    public Tour(String nombre, double precio) {
        this.setNombre(nombre);
        this.setPrecio(precio);
    }

	public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public double getPrecio() {
		return precio;
	}
	public void setPrecio(double precio) {
		this.precio = precio;
	}

    abstract public double calcularPrecio();
    abstract public int cantidadTuristas();
}
