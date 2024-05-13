public class Atraccion {
    private String nombre;
    private String direccion;
    private String descripcion;

    public Atraccion(String nombre, String direccion, String descripcion) {
        this.setNombre(nombre);
        this.setDireccion(direccion);
        this.setDescripcion(descripcion);
    }

	public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	public String getDireccion() {
		return direccion;
	}
	public void setDireccion(String direccion) {
		this.direccion = direccion;
	}
	public String getDescripcion() {
		return descripcion;
	}
	public void setDescripcion(String descripcion) {
		this.descripcion = descripcion;
	}
}
