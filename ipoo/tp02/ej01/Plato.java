public class Plato {
    private String nombre;
    private double precio;
    private String dia;

    public Plato(String nombre, double precio, String dia) {
        this.setNombre(nombre);
        this.setPrecio(precio);
        this.setDia(dia);
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

	public String getDia() {
		return dia;
	}
	public void setDia(String dia) {
		this.dia = dia;
	}
}
