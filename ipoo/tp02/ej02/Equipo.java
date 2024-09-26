package tp02.ej02;

public class Equipo {
    private String nombre;

    public Equipo(){}

    public Equipo(String nombre) {
        this.setNombre(nombre);
    }

	public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
}
