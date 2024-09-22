public class Chofer {
    private String nombre;
    private Colectivo colectivo;

    public Chofer(String nombre, Colectivo colectivo) {
        this.setNombre(nombre);
        this.setColectivo(colectivo);
    }

	public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	public Colectivo getColectivo() {
		return colectivo;
	}
	public void setColectivo(Colectivo colectivo) {
		this.colectivo = colectivo;
	}
}
