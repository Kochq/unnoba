package tp01.ej01;

public class Cliente {
    private String nombre;

    public Cliente(String nombre) {
        this.setNombre(nombre);
    }

	public String getNombre() {
		return nombre;
	}

	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
}
